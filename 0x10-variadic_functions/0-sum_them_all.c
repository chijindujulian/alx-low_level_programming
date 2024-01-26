#include "variadic_functions.h"

/**
 * sum_them_all - calculates the sum of all its parameters
 * @n: number of arguments passed to the function
 *
 * Return: the resulting sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list my_list;

	va_start(my_list, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
	{
		sum += va_list(mylist, int);
	}

	return (sum);

