#include "main.h"

/**
 * _strncat - string concat with n
 *
 * @dest: destination string
 * @src: source string
 * @n: integer count
 * Return: concat char
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, dlen = 0;

	while (dest[i++])
		dlen++;
	for (i = 0; src[i] && i < n; i++)
		dest[dlen++] = src[i];
	return (dest);
}	
