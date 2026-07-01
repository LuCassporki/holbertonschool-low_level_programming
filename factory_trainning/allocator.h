#ifndef ALLOCATOR_H
#define ALLOCATOR_H

#include <stddef.h> /* Pour avoir accès au type de taille 'size_t' */

/* * NOTRE MÉTA-BLOC : L'en-tête secret qui sera stocké dans la RAM 
 * juste AVANT la zone mémoire que l'utilisateur va utiliser.
 */
typedef struct MetaBlock {
    size_t size;             /* Taille réelle de la mémoire utilisateur (%lu) */
    int is_free;             /* Boîtier de contrôle : 1 = Libre, 0 = Occupé (%d) */
    struct MetaBlock *next;  /* Pointeur vers le bloc suivant dans la RAM (%p) */
} MetaBlock;

/* Macro pour connaître la taille exacte de notre en-tête en octets */
#define META_SIZE sizeof(MetaBlock)

/* Les prototypes des fonctions qu'on va fabriquer dans le .c */
void *my_malloc(size_t size);
void my_free(void *ptr);

#endif /* ALLOCATOR_H */
