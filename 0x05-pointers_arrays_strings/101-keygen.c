#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point makes a random password
 *
 * Return: the password
 */

int main(void)
{
	char ch;
	int i;

	srand(time(0));
	while (i <= 2645)
	{
	ch = rand() % 128;
	i += ch;
	putchar(ch);
	}
	putchar(2772 - i);
	return (0);
}
