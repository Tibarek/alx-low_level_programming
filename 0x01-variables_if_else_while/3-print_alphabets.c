#include <stdio.h>

/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char chl;

	char chu;

	chl = 'a';
	while (chl <= 'z')
	{
		putchar(chl);
		chl++;
	}
	chu = 'A';
	while (chu <= 'Z')
	{
		putchar(chu);
		chu++;
	}
	putchar('\n');
	return (0);
}
