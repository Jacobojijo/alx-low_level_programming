#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == 'e')
		{
			continue;
		}

		if (ch == 'q')
		{
			continue;
		}

		putchar(ch);
	}

		printf("\n");

		return (0);
}
