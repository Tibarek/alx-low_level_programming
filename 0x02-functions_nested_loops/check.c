#include "main.h"
#include <stdio.h>

/**
 * print_last_digit: prints last digit
 *
 * @num: input number 
 *
 * Return: returns last digit
 */

int last_digit(int);

int last_digit(int num)
{
	return (num + 10);
}

int main(void)
{
	int r;

	r = last_digit(-1024);
	putchar(r);
	return (r);
}
