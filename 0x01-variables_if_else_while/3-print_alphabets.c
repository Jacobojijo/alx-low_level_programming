#include <stdio.h>
/**
 * main - key function
 *
 * Return 0 success
 */

int main(void)
{
	char ch = 'a';
	char dh = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	while (dh <= 'Z')
	{
		putchar(dh);
		dh++;
	}
	putchar('\n');
	return (0);
}
