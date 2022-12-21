#include "main.h"

/**
 * _isupper - changes char to upper
 *
 * @c: character to be checked
 * Return: 0 or 1
 */
int _isupper(int c)
{
	int i;

	i = 'A';
	while (i <= 'Z')
	{
		if ( c == i)
			return 1;
		i++;
	}
	return 0;
}
