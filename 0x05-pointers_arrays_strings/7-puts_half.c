#include "main.h"

/**
* puts_half - puts half of a string
* @str: a string
* Return:void
*/
void puts_half(char *str)
{
	int size = _strlen(str);

	if (size % 2 == 0)
	size = size / 2;
	else
	size = (size + 1) / 2;

	while (str[size] != '\0')
	{
	_putchar(str[size]);
	len++;
	}
	_putchar('\n');
}

/**
 *_strlen - returns the length of a string
 * @s: string
 *Return: returns lenght;
 */

int _strlen(char *s)
{
	int count, i;

	i = 0;
	for (count = 0; s[count] != '\0'; count++)
	i++;

	return (i);
}
