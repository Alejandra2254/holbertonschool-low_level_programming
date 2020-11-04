#include "lists.h"
/**
 * get_nodeint_at_index - write a function that returns number of the node
 * @head: pointer to the first node
 * @index: the index of the node
 * Return: number of the node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int i = 0;

	while (i < index)
	{
		if (current)
			current = current->next;
		else
			return (NULL);
		i++;
	}
	if (current)
		return (current);
	else
		return (NULL);
}
