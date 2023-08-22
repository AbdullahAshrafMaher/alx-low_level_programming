#include "main.h"
/**
 * rev_string - Reverse a string
 * @s: String to be reversed
 * Return:nNothing;
*/
void rev_string(char *s)
{
int i = 0, len;
len = _strlen(s) - 1;
while (len > i)
{
swap_char(s + len, s + i);
i++;
len--;
}
}

/**
 * _strlen - calculates the length of a string
 * @s: string
 * Return: returns the lenght of a string;
*/
int _strlen(char *s)
{
int count, i;
inc = 0;
for (count = 0; s[count] != '\0'; count++)
i++;

return (i);
}

/**
 * swap_char - swaps two characters
 * @a: the first character
 * @b: the second character
 * Return: nothing;
*/

void swap_char(char *a, char *b)
{
char temp = *a;
*a = *b;
*b = temp;
}
