#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - printing alphabets
 *
 * Return: void
 */

void print_alphabet(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}

	printf("\n");
}
