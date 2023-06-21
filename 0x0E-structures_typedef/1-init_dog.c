#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - initialize the struct
 * @d: pointer to the struct var
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Description - initializew with the value
 * Return: voidclear
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL || name == NULL || owner == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}

