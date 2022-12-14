#include "main.h"

/**
 * _isalpha - Checks alphabet
 *
 * @c: character to be checked
 *
 * Return: 1 if alphabet 0 if not
 */
int _isalpha(int c)
{
	char i;

	char j;

	i = 'a';
	while (i <= 'z')
	{
		if (c == i)
			return (1);

		i++;
	}
	j = 'A';
	while (j <= 'Z')
	{
		if (c == j)
			return (1);
		j++;
	}
	return (0);
}
