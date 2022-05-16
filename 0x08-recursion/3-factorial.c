#include <stdio.h>
#include "main.h"

/**
 * factorial - finds factorial
 * @n: int
 * Return: int
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n == 1)
	{
		return (1);
	}

	else
	{
		return n * factorial(n-1);
	}
}

int main(void)
{
	int f;

	printf("%d\n", factorial(f));
	return (0);
}
