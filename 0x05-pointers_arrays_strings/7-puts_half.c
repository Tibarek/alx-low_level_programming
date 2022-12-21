#include "main.h"

/**
 * puts_half - prints half of  str
 *
 * @str: string to be half printed
 * Return: Nothing
 */
void puts_half(char *str)
{
	int i, j;

	i = 0;
	while (*(str + i) != '\0')
	{
		i++;
	}
	if (i % 2 == 0)
	{
		j = i / 2;
	}
	else
	{
		j = (i - 1) / 2;
	}
	while (j < i)
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}
