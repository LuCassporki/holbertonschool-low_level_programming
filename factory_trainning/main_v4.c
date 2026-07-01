#include <stdio.h>
#include "allocator.h"

int main(void)
{
    void *ptr_gros;
    void *ptr_petit;
    MetaBlock *en_tete_gros;

    printf("--- DIAGNOSTIC DU SPLITTING (DÉCOUPAGE) ---\n\n");

    /* 1. Allocation et libération d'une grosse zone */
    ptr_gros = my_malloc(200);
    en_tete_gros = (MetaBlock *)ptr_gros - 1;
    my_free(ptr_gros);

    printf("[*] Bloc de 200 octets créé puis libéré à l'adresse : %p\n", ptr_gros);

    /* 2. Allocation d'une petite zone (va déclencher le splitting) */
    ptr_petit = my_malloc(50);
    printf("[*] Petit bloc de 50 octets demandé. Reçu à l'adresse  : %p\n\n", ptr_petit);

    /* 3. Analyse de la structure du train de mémoire */
    printf("--- ANALYSE DE LA MÉMOIRE APRÈS SPLIT ---\n");
    printf("Taille actuelle du premier bloc : %lu octets (Attendu : 50)\n", en_tete_gros->size);
    
    if (en_tete_gros->next != NULL)
    {
        printf("[SUCCÈS] Un nouveau sous-bloc a été généré après le découpage !\n");
        printf("Adresse du sous-bloc créé : %p\n", (void *)en_tete_gros->next);
        printf("Taille du sous-bloc restée libre : %lu octets\n", en_tete_gros->next->size);
        printf("État du sous-bloc : %d (1 = libre)\n", en_tete_gros->next->is_free);
    }
    else
    {
        printf("[ÉCHEC] Le bloc n'a pas été découpé, les octets sont perdus.\n");
    }

    return 0;
}