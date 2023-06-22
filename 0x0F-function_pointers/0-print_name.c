#include <stdlib.h>
/**
 * print_name - prints name
 * @name: string literals
 * @f: function pointer
 *
 * Description - prints name it takes functions
 * Retrun: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;
	f(name);
}
