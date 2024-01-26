#include "variadic_functions.h"

/**
 * print_numbers - prints numbers given as parameters
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list my_list;

	va_start(my_list, n);

	for (i = 0; i < n; i++)
	{
		if (seperator == NULL)
		{
			printf("%d", va_arg(my_list, int));
		}
		else if (seperator && i == 0)
		{
			printf("%d", va_arg(my_list, int));
		}
		else
			printf("%s%d", seperator, va_arg(my_list, int);

	}
