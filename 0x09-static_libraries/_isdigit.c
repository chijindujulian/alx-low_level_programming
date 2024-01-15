#include "main.h"
/**
 * _isdigit - Check if value is a digit
 * @c: The parameter
 *
 * Description: Check if a value is an integer between 0 - 9
 * Return: 1 if digit. 0 if otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	} else
		return (0);
}

