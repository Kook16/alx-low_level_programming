#include "dog.h"

/**
 * free_dog - frees dog
 * @d: Adress of dog_t
 */

void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
