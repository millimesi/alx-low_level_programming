#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - summs together 
 * @n: num of arguments 
 * @...: unlimited num of arggumnts 
 *
 * Return: sun
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list par;
	unsigned int i, ressum;
	
	ressum = 0;
	va_start(par, n);

	for (i = 0; i < n; i++)
		resum += va_arg(par, int);

	va_end(par);

	return (ressum);
}
