#include "main.h"

/**
 * print_diagonal - prints diagonal
 *
 * @n: number of diagonal 
 * Return: Nothing
 */
void print_diagonal(int n)
{
	int i, j;

	if (n != 0 && n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)

				if(j == i)
				{
					_putchar(92);
				}
				else
				{
					_putchar(32);
				}
			}
			_putchar('\n');
		}
	}
}
