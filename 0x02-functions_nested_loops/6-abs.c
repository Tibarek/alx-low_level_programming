#include "main.h"

/**
 * _abs - computes absolute value
 *
 * @num: number to find absolute value
 *
 * Return: the positive value
 */
int _abs(int num)

{
	if (num < 0)
		return (num * -1);
	else
		return (num);
}

