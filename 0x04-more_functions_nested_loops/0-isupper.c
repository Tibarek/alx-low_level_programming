#include "main.h"

/**
 * _isupper - changes char to upper
 *
 * @c: character to be checked
 * Return: 0 not upper or 1 is upper
 */
int _isupper(int c)
{
	int i;

	i = 'A';
	while (i <= 'Z')
	{
		if (c == i)
		{
			return (1);
		}
		i++;
	}
	return (0);
}
