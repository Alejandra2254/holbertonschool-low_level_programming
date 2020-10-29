#ifndef LISTS_H
#define LISTS_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * struct nodo - singly linked list
 * @str: string of our list
 * @len: length
 * @next: apuntador siguiente nodo
 */

typedef struct nodo
{
	char *str;
	unsigned int len;
	struct nodo *next;
} list_t;
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
#endif
