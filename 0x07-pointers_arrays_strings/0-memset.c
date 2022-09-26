#include "main.h"

/**
 * _memset: fills byte of memory
 * @s: inserted string
 * @b: character variable
 * @n: an interger variable
 * Return: returns back an array of characters
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}
	return (s);
}
