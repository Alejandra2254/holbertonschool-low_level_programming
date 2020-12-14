#include "lists.h"

/**
 * get_dnodeint_at_index -  function that returns the nth node of a
 * dlistint_t linked list.
 * @head: input of a list.
 * @index: number of node of the list.
 * Return: the index node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp = head;
	unsigned int i;

	if (head)
	{
		for (i = 0; i < index; i++)
		{
			tmp = tmp->next;
			if (!tmp)
				return (NULL);
		}
	}
	return (tmp);
}
