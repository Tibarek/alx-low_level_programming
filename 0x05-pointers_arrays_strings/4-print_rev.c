#include "main.h"

/**
 * print_rev - prints reverse of string
 *
 * @s: string to be reversed
 * Return: nothing
 */
void print_rev(char *s)
{

	int i;
	int len;
	char ch;
	
	i = 0;
	while (*(s + i) != '\0')
	{
		i++;
	}

	len = i - 1;
	while (len >= 0)
	{
		ch = *(s + len);
		_putchar(ch);
		len--;
	}
	_putchar('\n');
}
