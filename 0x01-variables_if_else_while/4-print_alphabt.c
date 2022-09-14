#include <stdio.h>

/**
 * main - key function
 *
 * Return 0 succes
 */

int main(void)
{
	char ch = 'a';
	
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;

		if (ch == 'q' || ch == 'e')
		{
			ch++;
			continue;
		}
	}
	putchar('\n');
	return (0);
}
