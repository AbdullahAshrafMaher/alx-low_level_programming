#include "main.h"

/**
 * _strcat - adds the source parameter to the destination parameter
 *
 * @dest: the destination parameter
 * @src: the source parameter
 *
 * Return: the added destination;
*/


char *_strcat(char *dest, char *src)
{

	int i = 0, destLen  = 0;

	while (dest[i++])
		destLen++;

	for (i = 0; src[i]; i++)
		dest[destLen++] = src[i];

	return (dest);
}
