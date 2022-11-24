#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints elements of linked list
 * @h: the list
 * Return: Values of list ls
 */

size_t print_list(const list_t *h)
{
	size_t val = 0;

	while (h)
	{
		if (h->s == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->s);

		val++;
		h = h->next;
	}

	return (val);
}
