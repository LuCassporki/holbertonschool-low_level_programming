#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Structure de base pour stocker les donnees d'un chien
 * @name: Pointeur vers le nom du chien (char *)
 * @age: Age du chien (float)
 * @owner: Pointeur vers le nom du proprietaire (char *)
 *
 * Description: Definition d'une structure pour le module 0x0D
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

/**
 * dog_t - Typedef pour la structure struct dog
 */
typedef struct dog dog_t;

#endif /* DOG_H */
