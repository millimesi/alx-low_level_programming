#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - print all
 * @format: arguments types
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *s, *e = "";

	va_list list;

	va_start(list, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", e, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", e, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", e, va_arg(list, double));
					break;
				case 's':
					s = va_arg(list, char *);
					if (!s)
						s = "(nil)";
					printf("%s%s", e, s);
					break;
				default:
					i++;
					continue;
			}
			e = ", ";
			i++;
		}
	}

	printf("\n");
	va_end(list);
}
