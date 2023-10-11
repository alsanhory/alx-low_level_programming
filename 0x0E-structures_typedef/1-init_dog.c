#include "dog.h"
#include "main.h"
/**
 * init_dog - the function
 * @d: the struct
 * @name: the name of the dog
 * @age: the age
 * @owner: the owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
