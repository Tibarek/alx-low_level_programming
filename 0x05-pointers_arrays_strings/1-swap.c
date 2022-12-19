#include "main.h"

/**
 * swap_int - swaps value of integer
 * @a: first value
 * @b: second value
 * Return: Noting
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
