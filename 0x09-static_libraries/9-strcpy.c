#include "main.h"

/**
 * _strcpy - Copy and  paste a string
 * @dest:the destination
 * @src: the source
 * Return: the destination after pasting
*/
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i) != '\0')
	{
	*(dest + i) = *(src + i);
	i++;
	}
	*(dest + i) = '\0';

	return (dest);
}
