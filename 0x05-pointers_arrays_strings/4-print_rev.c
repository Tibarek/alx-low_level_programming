#include "main.h"

/**
 * print_rev - prints reverse os string
 * _strlen - returns length of string
 * @st: string length
 * @s: string to be reversed
 * Return: Nothing
 */
int _strlen(char *st)
{
	int i;

	i = 0;
	while (*(st + i) != '\0')
	{
		i++;
	}
	return (i);
}

void print_rev(char *s)
{
	int len;
	char ch;

	len = _strlen(s);
	while( len > 0)
	{
		ch = *(s + len);
		_putchar(ch);
		len--;
	}
	_putchar('\n');
}

