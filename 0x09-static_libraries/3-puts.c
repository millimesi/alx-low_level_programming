#include "main.h"
void _puts(char *str)
{
    int i = 0;
    while(str[i] != '\0')
    {
        _putchar(str[i]);
        i++;
    }
    _putchar('\0');
    _putchar('\n');
}