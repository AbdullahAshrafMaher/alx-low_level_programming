#include "main.h"

/**
 * array_range - creates an array of integers
 *
 * @min: smallest number in the array
 * @max: lagrest value in the array
 *
 * Return: pointer to the address of the memory block
*/

int *array_range(int min, int max)
{
	int *unit;
	int i, j = 0;

	if (min > max)
		return (NULL);
	unit = malloc(sizeof(*unit) * ((max - min) + 1));
	if (unit != NULL)
	{
		for (i = min; i <= max; i++)
		{
			unit[j] = i;
			j++;
		}
		return (unit);
	}
	else
		return (NULL);

}
