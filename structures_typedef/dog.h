#ifndef dog_h
#define dog_h

/**
 * struct dog - structure représentant un chien
 * @name: nom du chien (chaîne de caractères)
 * @age: âge du chien (nombre à virgule flottante)
 * @owner: nom du propriétaire du chien
 *
 * Description : Cette structure est utilisée pour stocker les informations
 * de base sur un chien, son nom, son âge et le nom du propriétaire.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
