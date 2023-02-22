#include <stdio.h>

/**
  * main - entry point
  * Return: 0
  */
int main(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	char ALP[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alp[i]);
	}
	for (i = 0; i < 26; i++)
		putchar(ALP[i]);
	putchar('\n');
	return (0);
}
