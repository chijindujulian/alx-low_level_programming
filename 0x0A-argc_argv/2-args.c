#include <stdio.h>

/**
 * main - entry point of the program
 * @argc: calculates total number of command line args
 * @argv: array of pointers to strings
 *
 * Return: 0
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
