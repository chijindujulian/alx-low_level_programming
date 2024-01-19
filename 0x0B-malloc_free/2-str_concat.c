#include <stdlib.h>
#include "main.h"

/**
 * *str_concat - concatenates two strings
 * @s1: string to concatenate
 * @s2: other string to concatenate
 *
 * Return: pointer to the new string created (Success), or NULL (Error)
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, len1, len2;
	char *str;

	/*get the length of string in s1*/
	for (len1 = 0; s1[len1] != '\0'; len1++)
	{}

	/*get length of s2*/
	for (len2 = 0; s2[len2] != '\0'; len2++)
	{}

	/*dynamic allocation of mem to str*/
	str = (char *) malloc((len1 + len2 + 1) * sizeof(char));

	/*check if str is null*/
	if (str == NULL)
		return (NULL);

	if (s1)
	{
		for (i = 0; i < len1; i++)
		{
			str[i] = s1[i];
		}
	}

	if (s2)
	{
		for (j = 0; j < (len1 + len2); j++)
		{
			str[i] = s2[j];
			i++;
		}
	}
	str[i] = '\0';

	return (str);

}
