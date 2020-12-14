#include "lists.h"

/**
 * delete_dnodeint_at_index - Removes a node at a given position
 * @head: Pointer to pointer to the head of the list
 * @index: The position where the node has to be inserted
 *
 * Return: number of elements in linked list
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *inxd_node, *tmp_node = *head;
unsigned int idx = 0;

if (tmp_node && (index == 0))
{
*head = tmp_node->next;
free(tmp_node);
return (1);
}
while (tmp_node)
{
if (idx + 1 == index)
{
inxd_node = tmp_node->next;
if (inxd_node)
{
tmp_node->next = inxd_node->next;
if (inxd_node->next)
inxd_node->next->prev = tmp_node;
free(inxd_node);
return (1);
}
}
tmp_node = tmp_node->next;
idx++;
}
return (-1);
}
