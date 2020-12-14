#include "lists.h"

/**
 * sum_dlistint - function that returns the sum of all the data (n) of a
 * dlistint_t linked list.
 * @head: input of a list.
 * Return: the sum of the list
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
        dlistint_t *ptr = *head;
        dlistint_t *next = NULL;
        unsigned int i;

        if (head == NULL || *head == NULL)
                return (-1);
        /*If head needs to be removed*/
        if (index == 0)
        {
                *head = ptr->next;   /*Change head*/
                free(ptr);          /* free old head*/
                return (1);
        }
        /* Find previous node of the node to be deleted*/
        for (i = 0; ptr != NULL && i < index - 1; i++)
                ptr = ptr->next;

        /* If position is more than number of nodes*/
        if (ptr == NULL || ptr->next == NULL)
                return (-1);
        /* Node temp->next is the node to be deleted */
        /* Store pointer to the next of node to be deleted*/
        next = ptr->next->next;

        /* Unlink the node from linked list*/
        free(ptr->next);

        ptr->next = next;
        return (-1);
}
