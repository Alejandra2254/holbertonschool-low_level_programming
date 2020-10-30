#include "lists.h"

/**
 * list_len - list of list
 * @h: pointer lo list
 * Return: count of elements
 */
size_t list_len(const list_t *h)
{
	int count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
