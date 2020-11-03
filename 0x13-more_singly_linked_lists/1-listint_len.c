#include "lists.h"
/**
 * listint_len - returns the number of elements in a linked
 * @h: pointer to struct list
 * Return: number of elemnts
 */
size_t listint_len(const listint_t *h)
{
	if (h)
	{
		return(1 + listint_len(h->next));
	}
	return (0);
}
