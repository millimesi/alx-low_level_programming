#include <stdio.h>
#include "dog.h"
/**
 * print_dog - prints the dog pro
 * @d: dog pro
 *
 * Description - prints the dog profile
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
