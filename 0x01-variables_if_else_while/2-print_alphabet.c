#include <stdio.h>

/**
 * main -key function
 *
 * Return ) success
 */

int main(void)
{
	char ch = 'a';

	while (ch  <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
