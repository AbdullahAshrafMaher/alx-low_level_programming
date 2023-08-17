#include "main.h"
/**
*print_numbers - function that verifies if a  character is a digit or not
*
*Return: nothing
*/

void print_numbers(void)
{
	int i = '0';

	for (; i <= '9';)
	{
		_putchar(i);
		i++;
	}
	_putchar(10);
}
