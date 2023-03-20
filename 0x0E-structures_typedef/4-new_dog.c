#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: name of owner
 * Return: address of new struct
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog = NULL;
	int lennam = 0, lenown = 0;

	if (name != NULL && owner != NULL)
	{
		lennam = strlen(name) + 1;
		lenown = strlen(owner) + 1;
		my_dog = malloc(sizeof(dog_t));
		if (my_dog == NULL)
			return (NULL);
		my_dog->name = malloc(sizeof(char) * lennam);
		if (my_dog->name == NULL)
		{
			free(my_dog);
			return (NULL);
		}
		my_dog->owner = malloc(sizeof(char) * lenown);
		if (my_dog->owner == NULL)
		{
			free(my_dog->name);
			free(my_dog);
			return (NULL);
		}
		my_dog->name = strcpy(my_dog->name, name);
		my_dog->owner = strcpy(my_dog->owner, owner);
		my_dog->age = age;
	}
	return (my_dog);
}
