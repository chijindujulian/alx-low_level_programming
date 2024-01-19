#include <stdlib.h>
#include "main.h"

/**
 * *create_array - creates an array of chars,
 * and initializes it with a specific char
 * @size: size of the array to create
 * @c: char to initialize the array c
 *
 * Return: pointer to the array (Success), NULL (Error)
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	if (size == 0)
		return (NULL);

	arr = (char *)malloc((size + 1) * sizeof(char));

	if (arr == NULL)
		return (0);

	for (i = 0; i < size; i++)
	{
		arr[i + 1] = c;
	}
	arr[i + 1] = '\0';

	return (arr);
}


