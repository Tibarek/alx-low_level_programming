#include "main.h"

/**
 * _isdigit - checks whether digit or not
 *
 * @c: value to be checked
 * Return: 1 for digit and 0 if not
 */
int _isdigit(int c)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		if (c == i)
		{
			return (1);
		}
	}
	return (0);
}
