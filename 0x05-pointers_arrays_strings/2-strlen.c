#include "main.h"

/**
 * _strlen - find the length of a string
 * @s: pointer to the string to check
 * Return: void
*/

int _strlen(char *s)
{
	int len;
	while (*s != '\0')
	{
		len += 1;
		*s = *s + 1;
	}
	return (len);
}
