#include "lists.h"
#include <stdio.h>

/**
 * listint_len - function returns number of elements
 * @h: head
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
