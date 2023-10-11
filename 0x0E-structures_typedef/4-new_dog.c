#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - new dog
 * @name: the name
 * @age: the age
 * @owner: the owner
 * Return: the dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int name_length = 0;
	int owner_length = 0;
	int i,j;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}

	dog_t *new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		return (NULL);
	}


	while (name[name_length] != '\0')
	{
		name_length++;
	}
	while (owner[owner_length] != '\0')
	{
		owner_length++;
	}

	new_dog->name = malloc(name_length + 1);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	new_dog->owner = malloc(owner_length + 1);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}

	for (i = 0; i <= name_length; i++)
	{
		new_dog->name[i] = name[i];
	}
	for (j = 0; j <= owner_length; j++)
	{ 
		new_dog->owner[j] = owner[j];
	}
	new_dog->age = age;

	return (new_dog);
}
