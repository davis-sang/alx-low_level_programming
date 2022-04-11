#include "dog.h"
#include <stdlib.h>
/**
 * _strdup - creates a duplicate of a string
 * @str:string to be duplicated
 *
 * Return: Pointer to duplicate of string
 */
char *_strdup(char *str)
{
	int str_length = 0;
	char *dup_string;
	int i;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		str_length++;
	}
	dup_string = malloc(str_length * (sizeof(char)) + 1);
	if (dup_string == NULL)
		return (NULL);
	for (i = 0; i < str_length; i++)
	{
		dup_string[i] = str[i];
	}
	dup_string[i] = '\0';
	return (dup_string);
}

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
	dog_t *cat;
	char *new_name;
	char *new_owner;

	if (name == NULL || owner == NULL)
		return (NULL);

	cat = malloc(sizeof(dog_t));
	if (cat == NULL)
		return (NULL);

	if (name != NULL)
	{
		new_name = _strdup(name);
		if (new_name == NULL)
		{
			free(cat);
			return (NULL);
		}
	}
	else
		new_name = NULL;

	if (owner != NULL)
	{
		new_owner = _strdup(owner);
		if (new_owner == NULL)
		{
			free(new_name);
			free(cat);
			return (NULL);
		}
	}
	else
		new_owner = NULL;

	cat->name = new_name;
	cat->age = age;
	cat->owner = new_owner;
	return (cat);
}
