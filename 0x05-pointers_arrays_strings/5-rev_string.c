#include "main.h"

/**
 * rev_string - reverses a string
 *
 * @s: value to be reversed
 * Return: Nothing
 */
void rev_string(char *s)
{
	int i, j;
	int len;
	char ch;

	i = 0;
	while (*(s + i) != '\0')
	{
		i++;
	}

	j = 0;
	len = i - 1;
	while(j < len/2)
	{
		ch = s[j];
		s[j] = s[len - j];
		s[len - j] = ch;
		j++;
	}
}
