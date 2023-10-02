#include "main.h"
/**
*print_diagonal - prints a diagonal
*@n:parameter
*Return:returns nothing
*/
void print_diagonal(int n)
{
int len, space;
if (n > 0)
{
for (len = 0; len < n; len++)
{
for (space = 0; space < len; space++)
	_putchar(' ');

_putchar(92);

if (len == (n - 1))
continue;
_putchar(10);
}
}
_putchar(10);
}
