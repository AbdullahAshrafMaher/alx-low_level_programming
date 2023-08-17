#include "main.h"
/**
 * print_square - prints a square
 *@size: print size of the square
 * Return: nothing.
 */

void print_square(int size)
{

int i;
int k;

if (size > 0)
{
for (i = 0; i < size; i++)
{

for (k = 0; k < size; k++)
{
_putchar (35);
}
_putchar (10);

}

}

else
{
_putchar ('\n');
}

}
