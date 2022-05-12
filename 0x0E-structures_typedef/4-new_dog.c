#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - New dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: Always 0
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int a, b, c;

	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	for (a = 0; name[a]; a++)
	dog->name = malloc(a * sizeof(char));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (c = 0; c < a; c++)
	{
		dog->name[c] = name[c];
	}
	dog->age = age;
	for (b = 0; owner[b]; b++)
	dog->owner = malloc(b * sizeof(char));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (c = 0; c < b; c++)
		dog->owner[c] = owner[c];
	return (dog);
}
