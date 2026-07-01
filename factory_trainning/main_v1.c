#include <stdio.h>
#include "allocator.h"

int main(void)
{
    void *ptr_utilisateur;
    MetaBlock *ptr_en_tete_secret;

    printf("--- DÉBUT DE LA RÉTRO-INGÉNIERIE ---\n\n");

    /* 1. On demande 100 octets à notre allocateur */
    ptr_utilisateur = my_malloc(100);

    if (ptr_utilisateur == NULL)
    {
        printf("Erreur : L'allocation a échoué.\n");
        return 1;
    }

    /* 2. On fait l'opération inverse (Rétro-ingénierie) :
     * On recule le pointeur de 1 bloc pour retrouver notre en-tête.
     */
    ptr_en_tete_secret = (MetaBlock *)ptr_utilisateur - 1;

    /* 3. Affichage des preuves métriques dans le terminal */
    printf("[+] Adresse donnée à l'utilisateur :  %p\n", ptr_utilisateur);
    printf("[+] Adresse de l'en-tête secret :    %p\n\n", (void *)ptr_en_tete_secret);

    printf("--- ANALYSE DES MÉTADONNÉES CACHÉES ---\n");
    printf("Taille enregistrée dans le bloc : %lu octets\n", ptr_en_tete_secret->size);
    printf("État du bloc (0 = occupé, 1 = libre) : %d\n", ptr_en_tete_secret->is_free);

    return 0;
}
