#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - Creates a new dog
 *
 * @name: Name of dog
 *
 * @age: Age of dog
 *
 * @owner: Owner of dog
 *
 * Return: Pointer to the newly created dog (SUCCESS) or
 * NULL if insufficient memory was available (FAILURE)
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p = malloc(sizeof(dog_t));

	if (p == NULL)
		return (NULL);
	p->name = name;
	p->age = age;
	p->owner = owner;

	return (p);
}