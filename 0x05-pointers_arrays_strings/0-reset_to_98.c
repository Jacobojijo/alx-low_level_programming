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

	int n = 402;
	int *m;

	m = &n;

	reset_to_98(m);
	printf("%d\n", n);	
	return (0);
}
