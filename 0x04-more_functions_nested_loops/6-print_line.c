#include "main.h"

/**
 * print_line - prints line
 *
 * @n: size of line
 * Return: Nothing
 */
void print_line(int n)
{
	while (n != 0 && n > 0)
	{
		_putchar(95);
		n--;
	}
	_putchar('\n');
}
