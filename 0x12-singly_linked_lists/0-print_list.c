#include "main.h"

/**
 * print_list - prints a list
 * @h: pointer to the list_t to print
 *
 * Return: Number of printed nodes
 *
 */
size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		if (str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			prinf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
		s++;
	}

	return (s);
}
