#include "lists.h"

/**
 * print_listint - print a list of integers in singly linked list
 * @h: pointer to the singly linked list
 *
 * Return: number of nodes in the singly linked list
 */

size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}

	return (i);
}
