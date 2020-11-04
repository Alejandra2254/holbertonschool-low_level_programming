#include "lists.h"
/**
 * free_listint2 - free a list and sets head to NULL
 * @head: pointer to head node
 */
void free_listint2(listint_t **head)
{
	listint_t *change;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		change = *head;
		*head = (*head)->next;
		free(change);
	}
}
