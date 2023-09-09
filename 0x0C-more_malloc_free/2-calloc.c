#include "main.h"

/**
 * _calloc - allocate memory using malloc and initialize it to zero
 *
 * @nmemb: number of elements
 * @size: size of the memory block to be allocated
 *
 * Return: poiner to the address of the memory block
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *unit;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	unit = malloc(nmemb * size);
	if (unit != NULL)
	{
		for (i = 0; i < (nmemb * size); i++)
			unit[i] = 0;
		return (unit);
	}
	else
		return (NULL);
}
