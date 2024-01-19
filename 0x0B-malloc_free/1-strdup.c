#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - duplicate the string given as argument
 * @str: string to duplicate
 *
 * Return: pointer to the duplicated string (Success), NULL (Error)
 */

char *_strdup(char *str)
{
	int i, j;
	char *dup;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{}

	dup = (char *)malloc(i * sizeof(char));

	if (dup == NULL)
		return (NULL);

	for (j = 0; j < i; j++)
	{
		dup[j] = str[j];
	}
	dup[j] = '\0';
	free(dup);

	return (dup);
}
