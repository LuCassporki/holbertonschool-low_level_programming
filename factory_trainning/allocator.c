#include "allocator.h"
#include <unistd.h>

void *global_start = NULL;

/* 1. METS LA FONCTION D'AIDE EN PREMIER */
static MetaBlock *find_free_block(MetaBlock **last, size_t size)
{
    MetaBlock *current = (MetaBlock *)global_start;

    while (current != NULL)
    {
        if (current->is_free && current->size >= size)
            return current;

        *last = current;
        current = current->next;
    }
    return NULL;
}

/* Fonction d'aide privée : découpe un bloc si l'espace restant est suffisant */
static void split_block(MetaBlock *block, size_t size)
{
    MetaBlock *new_block;

    /* Pour pouvoir découper, il faut que l'espace restant soit assez grand
     * pour contenir un en-tête (24 octets) + au moins 1 octet de données.
     */
    if (block->size >= size + META_SIZE + 1)
    {
        /* Calcul de l'adresse du nouveau bloc dans la RAM */
        char *base_ptr = (char *)block;
        new_block = (MetaBlock *)(base_ptr + META_SIZE + size);

        /* Configuration du nouveau bloc libre */
        new_block->size = block->size - size - META_SIZE;
        new_block->is_free = 1;
        
        /* Insertion du nouveau bloc dans la liste chaînée */
        new_block->next = block->next;
        block->next = new_block;

        /* Ajustement de la taille du bloc actuel */
        block->size = size;
    }
}

/* 2. METS MY_MALLOC EN DEUXIÈME */
void *my_malloc(size_t size)
{
    MetaBlock *block;
    MetaBlock *last = NULL;
    void *requested_memory;

    if (size <= 0)
        return NULL;

    if (global_start != NULL)
    {
        last = (MetaBlock *)global_start;
        /* Maintenant, GCC connaît la fonction car elle est écrite plus haut ! */
        block = find_free_block(&last, size);
        
        if (block != NULL)
        {
            /* AVANT de valider, on tente de découper le bloc s'il est trop grand */
            split_block(block, size);

            block->is_free = 0;
            return (void *)(block + 1);
        }
    }

    requested_memory = sbrk(META_SIZE + size);
    if (requested_memory == (void *)-1)
        return NULL;

    block = (MetaBlock *)requested_memory;
    block->size = size;
    block->is_free = 0;
    block->next = NULL;

    if (global_start == NULL)
        global_start = (void *)block;

    if (last != NULL)
        last->next = block;

    return (void *)(block + 1);
}

/* 3. METS MY_FREE EN DERNIER */
void my_free(void *ptr)
{
    MetaBlock *block;

    if (ptr == NULL)
        return;

   /* 1. On retrouve l'en-tête */
    block = (MetaBlock *)ptr - 1;
    block->is_free = 1;

    /* 2. LA FUSION (Coalescence) : 
     * Si le wagon suivant existe ET qu'il est libre aussi...
     */
    if (block->next != NULL && block->next->is_free)
    {
        /* La nouvelle taille du bloc devient : 
         * sa taille actuelle + l'en-tête du suivant + la taille du suivant
         */
        block->size = block->size + META_SIZE + block->next->size;
        
        /* On fait sauter le wagon suivant du train en pointant vers celui d'après */
        block->next = block->next->next;
    }
}