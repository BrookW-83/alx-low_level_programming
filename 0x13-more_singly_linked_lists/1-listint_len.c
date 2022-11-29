#include "lists.h"
#include <stdlib.h>

/**
 * listint_len - function returns number of elements
 * @h: head
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t nd = 0;

	while (h)
	{
		nd++;
		h->next;
	}

	return (nd);
}
