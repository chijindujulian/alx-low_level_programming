#include "main.h"
/**
 * _isupper - Print uppercase alphabets
 * @c: The parameter
 *
 * Description: Print the uppercase alphabets
 * Return: 1 if uppercase. 0 if otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	} else
		return (0);
}

