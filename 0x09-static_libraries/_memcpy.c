#include "main.h"
/**
 * *_memcpy - copy memory with a src character
 * @dest: memory area to be filled
 * @src: char to copy
 * @n: number of times to copy src
 *
 * Return: pointer to the memory area s
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; src[i] < src[n]; i++)
	{
		dest[i] = src[i];
	}

	return(dest);
}
