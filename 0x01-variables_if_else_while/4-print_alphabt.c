#include <stdio.h>

/**
 * main - Entry point
 *
 * Return : Always 0 (Success)
 */
int main(void)
{
	char ch;

	ch = 'a';
	while (ch <= 'z')
	{
		if ( ch == 'e' || ch == 'q')
			continue;
		else
			putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
