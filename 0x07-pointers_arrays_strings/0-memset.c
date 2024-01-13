#include "main.h"
/**
 * *_memset - function that fills memory with a constant byte
 * @s: The memory area
 * @b: character
 * @n: The number of bytes
 *
 * Description: Fill memory with constant byte
 * Return: A pointer to the mmemory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
