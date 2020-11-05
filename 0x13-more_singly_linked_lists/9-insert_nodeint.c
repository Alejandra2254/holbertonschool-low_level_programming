#include "lists.h"

/**
 * insert_nodeint_at_index - insert a new node at a given position
 * @head: pointer to the first node
 * @idx: index of the list where the new node should be added.
 * @n: data of the node
 * Return: address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 1;
	listint_t *new, *tmp;

	if (head == NULL)
		return (NULL);
	tmp = *head;
	while (i < idx)
	{
		tmp = tmp->next;
		i++;
	}

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		new->next = tmp->next;
		tmp->next = new;
	}
	return (new);
}
