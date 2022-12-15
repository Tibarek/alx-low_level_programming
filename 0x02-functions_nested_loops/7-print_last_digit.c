#include "main.h"
#include <stdio.h>

/**
 * print_last_digit: prints last digit of a given number
 *
 * @num: input number
 *
 *Description: last digit of a number
 * Return: returns last digit
 */
int print_last_digit(int num)
{
	int ld;

	ld = num % 10;
	if (ld < 0)
		ld = ld * -1;
	_putchar(ld + '0');
	return (ld);
}
