#include "main.h"

/**
 * _strncat - concatenates two strings  with the inputted number of bytes
 *
 * @dest: string to be appended upon
 * @src: string to be added
 * @n: integer parameter to compare index to
 *
 * Return: returns new concatenated string;
*/

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, destLen = 0;

	while (dest[i++])
		destLen++;

	for (i = 0; src[i] && i < n; i++)
		dest[destLen++] = src[i];

	return (dest);

}
