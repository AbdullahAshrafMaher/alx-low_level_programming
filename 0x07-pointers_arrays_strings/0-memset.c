#include "main.h"

/**
 * _memset - fills the first n bytes of the memory
 * area pointed to by s with the byte b
 *
 *
 * @s:target
 * @b: constant byte
 * @n:number of byte
 *
 * Return: returns a new value of the target
*/

char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);

}
