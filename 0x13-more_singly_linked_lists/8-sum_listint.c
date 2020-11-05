#include "lists.h"
/**
 * sum_listint - sum of all the data
 * @head: pointer to the first node
 * Return: sum of all int.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *tmp;

	if (head == NULL)
		return (0);

	while (head)
	{
		sum = sum + head->n;
		tmp = head->next;
		head = tmp;
	}
	return (sum);
}
