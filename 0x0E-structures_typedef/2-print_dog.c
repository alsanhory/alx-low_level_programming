#include "dog.h"
#include<stdio.h>
/**
 * print_dog - the function
 * @d: the struct
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
		{
			printf("Name: %s\n", "(nil)");
		}
		else
		{
			printf("Name: %s\n", d->name);
		}
		if (d->age == d->age)
		{
			printf("Age: %.6f\n", d->age);
		}
		else
		{
			printf("Age: (nil)\n");
		}

		if (d->owner == NULL)
		{
			printf("Owner: %s\n", "(nil)");
		}
		else
		{
			printf("Onwer: %s\n", d->owner);
		}
	}
}
