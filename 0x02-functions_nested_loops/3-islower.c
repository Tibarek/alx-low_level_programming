#include "main.h"

/**
 * int_islower - Checks lower case
 *
 * Return: 1 if lowedr 0 if not
 */
int _islower(int c)
{
	char i;

	i = 'a';
	while (i <= 'z')
	{
		if (c == i)
			return (1);

		else
			i++;
	}
	return (0);
}
