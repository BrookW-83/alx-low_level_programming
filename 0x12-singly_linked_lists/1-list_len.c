#include "lists.h"

/**
 * list_len - returns number of elements in linked list
 * @h: the linked list
 * Return: n
 */

size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}

	return (n);
}
