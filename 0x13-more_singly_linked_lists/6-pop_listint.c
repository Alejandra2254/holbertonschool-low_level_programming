#include "lists.h"
/**
 * pop_listint - removing head
 * @head: pointer to the first node
 * Return: entero del nodo eliminado
 */
int pop_listint(listint_t **head)
{
	listint_t *temp = NULL;
	int i = 0;

	if (*head == NULL)
		return (0);

	temp = *head; /*almacenar nodo principal*/
	i = temp->n;
	*head = temp->next; /* change head*/
	free(temp); /* liberar old head */
	return (i);
}
