#include "main.h"
/**
 * print_rev - prints the string in reverse
 * @s: the string to be printed
*/

void print_rev(char *s)
{
int len = 0, i = 0;
len = _strlen(s);

for (i = len - 1; i >= 0; i--)
_putchar(s[i]);

_putchar('\n');
}

/**
 * _strlen - calculates the length of a string
 * @s: string
 * Return: returns the lenght of the string;
*/
int _strlen(char *s)
{
int count, i;
i = 0;
for (count = 0; s[count] != '\0'; count++)
i++;

return (i);
}
