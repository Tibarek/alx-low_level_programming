#include "main.h"

/**
 * _strcpy - string copy
 *
 * @des: copy string
 * @src: source string
 * Return: copied string
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while(*(src + i) != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
