#include "main.h"
/**
 * _strlen - return length of a string
 * @s: The string to be checked
 *
 * Return: Always 0
 */

int _strlen(char *s)
{
	int i = 1, j = 0;
	char c = s[0];

	while (c != '\0')
	{
		j++;
		c = s[i++];
	}
	return (j);
}

