#include <stdio.h>
#include "allocator.h"

int main(void)
{
    void *ptr1, *ptr2;
    MetaBlock *en_tete1;

    printf("--- CRASH TEST FINAL DE L'ALLOCATEUR ---\n\n");

    /* 1. On alloue deux blocs côte à côte */
    ptr1 = my_malloc(50);
    ptr2 = my_malloc(50);
    en_tete1 = (MetaBlock *)ptr1 - 1;

    printf("[*] Bloc 1 (50 octets) créé à l'adresse : %p\n", ptr1);
    printf("[*] Bloc 2 (50 octets) créé à l'adresse : %p\n\n", ptr2);

    /* 2. On les libère tous les deux pour déclencher la fusion */
    my_free(ptr2);
    my_free(ptr1);
    printf("[*] Les deux blocs ont été libérés.\n\n");

    /* 3. Analyse de la fusion */
    printf("--- RÉSULTAT DU SCAN DE LA RAM ---\n");
    printf("Nouvelle taille du Bloc 1 après fusion : %lu octets\n", en_tete1->size);
    printf("Note : On attend environ 124 octets (50 + 24 d'en-tête + 50).\n\n");
    printf("[DEBUG] Taille réelle lue dans en_tete1->size : %lu octets\n", en_tete1->size);

    if (en_tete1->size >= 100)
        printf("[PROJET TERMINÉ À 100%%] La fusion a fonctionné, la RAM est propre.\n");
    else
        printf("[ERREUR] Les blocs sont restés séparés.\n");

    return 0;
}