#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch = 'a';
	char dh = 'A';

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}

	for (dh = 'A'; dh <= 'Z'; dh++)
	{
		putchar(dh);
	}

	printf("\n");

	return (0);
}
