#include "main.h"

/**
 * str_concat - concatenates two strings.
 *
 * @s1:First string
 * @s2:Second string
 *
 * Return: NULL in case of failure else pointer to new string
*/

char *str_concat(char *s1, char *s2)
{
	char *concatStr;
	int i, concatIndex = 0,  lenth = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] || s2[i]; i++)
		lenth++;

	concatStr = malloc(sizeof(char) * lenth);

	if (concatStr == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		concatStr[concatIndex++] = s1[i];

	for (i = 0; s2[i]; i++)
		concatStr[concatIndex++] = s2[i];

	return (concatStr);
}
