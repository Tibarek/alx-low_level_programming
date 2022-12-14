#include "main.h"

/**
 * _strcpy - string copy
 *
 * @dest: copy string
 * @src: source string
 * Return: copied string
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (*(src + i) != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	if (*(src + i) == '\0')
	{
		dest[i] = '\0';
	}

	return (dest);
}
