#include "main.h"

/**
 * cap_string -  capitalizes the given string
 *
 * @str: string to be capitalized
 *
 * Return: the capitalized string.
 *
*/

char *cap_string(char *str)
{
	int index = 0;
	int is_new_word = 1;

	while (str[index])
	{
		if ((str[index] >= 'a' && str[index] <= 'z') ||
				(str[index] >= 'A' && str[index] <= 'Z'))
		{
			if (is_new_word)
			{
				if (str[index] >= 'a' && str[index] <= 'z')
				{
					str[index] -= 32;
				}
				is_new_word = 0;
			}
			else
			{
				if (str[index] >= 'A' && str[index] <= 'Z')
				{
					str[index] += 32;
				}
			}
		}
		else if (str[index] == ' ' ||
				str[index] == '\t' || str[index] == '\n' ||
				str[index] == '.' || str[index] == '!' ||
				str[index] == '?')
		{
			is_new_word = 1;
		}

		index++;
	}

	return (str);
}

