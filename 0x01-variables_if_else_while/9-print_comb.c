#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 success
 */

int main(void)
{
	int n = 0;

	while (n < 9)
	{
		printf("%d", n);
		printf(", ");
		n++;
	}
	printf("9");
	putchar('\n');
	return (0);
}
