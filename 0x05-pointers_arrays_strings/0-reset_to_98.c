#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 *
 * Return: Always 0 success
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
