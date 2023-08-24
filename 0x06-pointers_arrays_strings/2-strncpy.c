#include "main.h"
/**
 * _strncpy - C function that copies a string, according to the size provided
 *
 * @dest: destination storing the string copy
 * @src:the source string
 * @n:max size
 *
 * Return: the destination;
 *
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
		dest[i] = src[i];

	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
}
