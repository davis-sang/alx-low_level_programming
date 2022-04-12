#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - creates new dog
 * @name: Name of dog
 * @age: Age of dog
 * @owner: Owner of dog
 *
 * Return: Pointer to dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int l1, l2, i;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	for (l1 = 0; name[l1]; l1++)
		;
	l1++;
	dog->name = malloc(l1 * sizeof(char));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (i = 0; i < l1; i++)
		dog->name[i] = name[i];
	dog->age = age;
	for (l2 = 0; owner[l2]; l2++)
		;
	l2++;
	dog->owner = malloc(l2 * sizeof(char));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (i = 0; i < l2; i++)
		dog->owner[i] = owner[i];
	return (dog);
}
