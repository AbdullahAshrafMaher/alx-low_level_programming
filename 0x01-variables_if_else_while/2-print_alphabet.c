#include <stdio.h>

/**
 * main - Entry point
 *
 * Description:all alphapet letters
 *
 * Return: 0 (Success)
*/

int main(void)
{
		char ch = 'a';

		while (ch <= 'a')
		{
			putchar(ch);
			ch++;
		}
		putchar('\n');

		return (0);
}
