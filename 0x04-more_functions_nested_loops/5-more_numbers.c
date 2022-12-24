#include "main.h"

/**
 * more_numbers - prints numbers
 *
 * print_long - gives number value
 * @value: value to be changed
 * Return: Nothing
 */
void more_numbers(void)
{
	int i, j, k, l, m;

	for (j = 0; j <=9; j++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i == 0)
			{
				_putchar('0');
			}
			else
			{
				k = i;
				if ( k <= 9)
					l = k;
				else
					l = k / 10;
				m = 0;
				while (m < 2)
				{
					_putchar((l % 10 + '0'));
					l = k % 10;
					m++;

				}
			}
		}
		_putchar('\n');
	}
}
