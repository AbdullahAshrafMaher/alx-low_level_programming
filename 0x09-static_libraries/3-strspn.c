#include "main.h"

/**
 *_strspn - search for the number of bytes in the initial
 * segment of s which consist only of bytes from accept
 *
 * @s:segment targeted
 * @accept:reference bytes container
 *
 * Return: the number of bytes in the initial
 * segment of s which consist only of bytes from accept
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int theBytes = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (accept[i] == *s)
			{
				theBytes++;
				break;
			}
			else if ((accept[i + 1]) == '\0')
				return (theBytes);
		}
		s++;
	}
	return (theBytes);
}
