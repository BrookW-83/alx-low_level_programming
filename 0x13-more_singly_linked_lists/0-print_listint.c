#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all elements of list
 * @h: head
 * Return: nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t nd = 0;

	while (h)
	{
		nd++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (nd);
}
