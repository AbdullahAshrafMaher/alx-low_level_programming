#include "main.h"
/**
 * rev_string - Reverse a string
 * @s: the String to be reverse
 * Return: nothing
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
 *_strlen - returns the length of a string
 * @s: string
 *Return: returns lenght;
 */
int _strlen(char *s)
{
int count, inc;
inc = 0;
for (count = 0; s[count] != '\0'; count++)
inc++;

return (inc);
}

/**
*swap_char - swap two characters
*@a: first character
*@b: second character
*Return: nothing
*
*/
void swap_char(char *a, char *b)
{
char tmp = *a;
*a = *b;
*b = tmp;
}
