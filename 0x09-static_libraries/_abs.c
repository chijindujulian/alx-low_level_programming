#include <stdio.h>
/**
 * _abs - Compute the absolute value of an integer
 * @c: The integer to be checked
 *
 * Return: Always 0.
 */

int _abs(int c)
{
	if (c < 0)
	{
		int abs_val;

		abs_val = c * -1;
	return (abs_val);
	}
	return (c);
}

