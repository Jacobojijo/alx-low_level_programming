#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

void reset_to_98(int *n)
{
	*n = 98;
}

int main(void)
{

	int *n;

	reset_to_98(n);
	printf("%d\n", n);	
	return (0);
}
