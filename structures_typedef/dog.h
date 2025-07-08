#ifndef dog_h
#define dog_h

/**
 * struct dog - structure représentant un chien
 * @name: nom du chien (chaîne de caractères)
 * @age: âge du chien (nombre à virgule flottante)
 * @owner: nom du propriétaire du chien
 *
 * Description : Cette structure est utilisée pour stocker les informations
 * de base sur un chien, notamment son nom, son âge et le nom de son propriétaire.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif
