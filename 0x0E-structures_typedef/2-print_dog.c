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
	if (d != NULL)
	{
		if ((d->name) == NULL)
			printf("Name: %s", "(nil)");
		else if (d->age == 0)
			printf("Age: %d", 0);
		else if (d->owner == NULL)
			printf("Owner: %s", "(nil)");
		else
		{
			printf("mydog.name = %s\n", d->name);
			printf("mydog.age = %f\n", d->age);
			printf("mydog.owner = %s\n", d->owner);
		}
	}
}
