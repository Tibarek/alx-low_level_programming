#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	int ch;

	num = 48;
	while (num <= 57)
	{
		putchar(num);
		num++;
	}
	ch = 97;
	while (ch <= 102)
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
