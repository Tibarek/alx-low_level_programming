#include "main.h"

/**
 * more_numbers - prints numbers
 * 
 * print_long - gives number value
 * @value: value to be changed
 * Return: Nothing
 */
void print_long(long value)
{
	if (value != 0)
	{
		print_long(value / 10);
		_putchar((value % 10 + '0'));
	}
}

void more_numbers(void)
{
	int i,j;

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
				print_long(i);
			}
		}
		_putchar('\n');
	}
}
