#include "main.h"

/**
 * puts2 - puts char
 *
 * @str: string to be put
 *
 * Return: Nothing
 */
void puts2(char *str)
{
	int i, j;

	i = 0;
	while(*(str + i) != '\0')
	{
		i++;
	}

	for(j = 0; j < i; j++)
	{
		if(j % 2 == 0)
		{
			_putchar(*(str + j));
		}
	}
	_putchar('\n');
}
