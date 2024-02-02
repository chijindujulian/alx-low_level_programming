#include "lists.h"

/**
 * print_list - prints a list
 * @h: pointer to the list_t to print
 *
 * Return: Number of elements in list
 *
 */

size_t list_len(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		s++;
		h = h->next;
	}

	return (s);
}

