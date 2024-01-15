#include "main.h"
/**
 * _islower - Check if a character is lowercase
 * @c: The character to be checked
 *
 * Return: 1 if lowercase. 0 if otherwise
 */

int _islower(int c)
{
	/*Check if character is lowercase*/
	/*ascii values of lowercase ranges from 97 - 122*/
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
		return (0);
}

