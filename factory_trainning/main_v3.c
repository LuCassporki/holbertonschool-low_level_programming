#include <stdio.h>
#include "allocator.h"

int main(void)
{
    void *ptr1;
    void *ptr2;

    printf("--- TEST DE RÉUTILISATION DE LA MÉMOIRE ---\n\n");

    /* Premier Malloc */
    ptr1 = my_malloc(100);
    printf("[1] Adresse de ptr1 : %p\n", ptr1);

    /* Libération immédiate */
    my_free(ptr1);
    printf("[*] ptr1 a été libéré.\n\n");

    /* Deuxième Malloc (Même taille) */
    ptr2 = my_malloc(100);
    printf("[2] Adresse de ptr2 : %p\n\n", ptr2);

    /* Vérification du diagnostic */
    if (ptr1 == ptr2)
        printf("[SUCCÈS] Le système a recyclé le bloc libre ! Pas de gaspillage.\n");
    else
        printf("[ÉCHEC] Le système a alloué une nouvelle zone au lieu de recycler.\n");

    return 0;
}