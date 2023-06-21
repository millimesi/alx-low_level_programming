#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - freeing memory
 * @d: return struct pointer
 *
 * Description - free struct
 * Return: void
 */
void free_dog(dog_t *d)
{
	free(d);
}

