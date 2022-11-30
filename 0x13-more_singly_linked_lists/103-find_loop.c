#include "lists.h"

/**
 * find_listint_loop - function that finds loop in linked list
 * @head: pointer to first node
 * Return: NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *fast, *slow;

	if (head == NULL || head->next == NULL)
		return (NULL);

	fast = head->next;
	slow = (head->next)->next;

	while (slow)
	{
		if (fast == slow)
		{
			fast = head;

			while (fast != slow)
			{
				fast = fast->next;
				slow = slow->next;
			}

			return (fast);
		}

		fast = fast->next;
		slow = (slow->next)->next;
	}

	return (NULL);
}
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
-- INSERT --                                                                                                                                                                  0,1           All

