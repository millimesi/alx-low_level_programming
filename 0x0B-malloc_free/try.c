#include "main.h"
#include <stdlib.h>
#include <stdio.h>
char *_strdup(char *str)
{
    char *string;
    int i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    string = malloc((i + 1) * (sizeof(char)));
    if (string != NULL)
    {
        int j;
        for (j = 0; j < i; j++)
        {
            string[j] = str[j];    
        }
        string[i] = '\0';
    }
    return (string);
}
int main(void)
{
    char *s;
    
    s = _strdup("milla");
    s[0] = 'g'; 
    if (s == NULL)
    {
        printf("failed to allocate memory\n");
        return (1);
    }
    printf("%s\n", s);
    free(s);
    return (0);
}