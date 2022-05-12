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
	unsigned int a = 0;
	unsigned int b = 0;
	unsigned int c = 0;

	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	while (name[a])
	{
		a++;
	}
	dog->name = malloc(a * sizeof(char));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	while (c < a)
	{
		c++;
		dog->name[c] = name[c];
	}
	dog->age = age;
	while (owner[b])
	{
		b++;
	}
	dog->owner = malloc(b * sizeof(char));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	while (c < b)
	{
		c++;
	}
		dog->owner[c] = owner[c];
	return (dog);
}
