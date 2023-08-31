#include "main.h"

/**
 * _print_rev_recursion - prints a reversed string followed by a new line
 * @s: character to be printed
 * Return: nothing
*/

void _print_rev_recursion(char *s);
{
	if (*s == '\0')
		_putchar('\n');
	else
	{
		_puts_recursion(s + 1);
		_putchar(*s);
	}
}
