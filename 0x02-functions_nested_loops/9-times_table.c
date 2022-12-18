#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 * Return: void
 * print_long - prints int value
 *
 * @value: value to be changed to int
 */
void print_long(long value)
{
	if( value != 0 )
	{
		print_long(value / 10);
		_putchar((value % 10 + '0'));
	}
}
void times_table(void)
{
	int i, j, k;

	for(i = 0; i <= 9; i++)
	{
		for(j = 0; j <= 9; j++)
		{
			k = i * j;
			if( k == 0 )
				_putchar(k + '0');
			print_long(k);
			if( j != 9 ) {
				_putchar(',');
				if (k <= 9)
				{
					_putchar(' ');
					_putchar(' ');
				}
				else
				{
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
}

