#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet 10 times
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int i = 0;

	while (i <= 10)
	{
		int dh = 'a';

		while (dh <= 'z')
		{
			_putchar(dh);
			dh++;
		}

		_putchar('\n');
		i++;
	}
}
