#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - initialize the struct
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Description - initializew with the value
 * Return: NULL if memory is not allocated or d
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d = malloc(sizeof(dog_t));

	if (d == NULL)
		return (NULL);
	d->name = name;
	d->age = age;
	d->owner = owner;
	return (d);
}

