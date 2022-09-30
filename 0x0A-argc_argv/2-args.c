#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 success
 * @argc: returns an interger count
 * @argv: returns a string of characters from main
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
