#include <stdio.h>
#include "allocator.h"

int main(void)
{
    void *ptr_utilisateur;
    MetaBlock *ptr_en_tete_secret;

    printf("--- TEST DE LA LIBÉRATION (MY_FREE) ---\n\n");

    /* 1. Allocation */
    ptr_utilisateur = my_malloc(100);
    if (ptr_utilisateur == NULL) return 1;

    /* 2. Récupération de l'en-tête */
    ptr_en_tete_secret = (MetaBlock *)ptr_utilisateur - 1;

    /* 3. Vérification de l'état initial */
    printf("[+] Bloc alloué à l'adresse : %p\n", ptr_utilisateur);
    printf("[*] État AVANT my_free : %d (0 = occupé)\n", ptr_en_tete_secret->is_free);

    /* 4. Libération brute */
    my_free(ptr_utilisateur);

    /* 5. Vérification de l'état final */
    printf("[*] État APRÈS my_free  : %d (1 = libre)\n", ptr_en_tete_secret->is_free);

    return 0;
}