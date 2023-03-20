#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * print_dog - prints a struct dog
 * @d: Address of structure dog
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		;
	else if ((d->name) == NULL || d->age == (void *)NULL || (d->owner) == NULL)
		printf("nil");
	else
	{
		printf("mydog.name = %s\n", d->name);
		printf("mydog.age = %f\n", d->age);
		printf("mydog.owner = %s\n", d->owner);
	}
}
