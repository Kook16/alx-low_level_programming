#ifndef MAIN_H
#define MAIN_H

/**
 * struct dog - A struct for a dog
 * @name: name of dog
 * @age: age of dog
 * @owner: name of the owner
 *
 * Description: The attribute of a dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef for dog structure
 */
typedef struct dog dog_t;


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
