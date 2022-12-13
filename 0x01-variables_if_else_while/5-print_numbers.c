#include <stdio.h>

/**
 * main - Entry point
 *
 * Retrun: Always 0 (Success)
 */
int main(void)
{
	int num;

	num = 0;
	while (num < 10)
	{
		printf("%d", num);
		num++;
	}
	putchar('\n');
	return(0);
}
