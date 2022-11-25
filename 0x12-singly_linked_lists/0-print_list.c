#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_list - prints elements of linked list
 * @h: the list
 * Return: Values of list ls
 */

size_t print_list(const list_t *h)
{
	size_t val = 0;

	if (!h)
		return (0);

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		val++;
		h = h->next;
	}

	return (val);
}
