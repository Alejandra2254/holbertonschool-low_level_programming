#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * _calloc - allocates memory for an array
 * @nmemb: num elements of array
 * @size: size of bytes of the elements
 * Return: NULL if fails, string memory with zero
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;
	unsigned int i; /* para recorrer y asignar 0 a la memoria */

	if (nmemb == 0 || size == 0)
		return (NULL);
	a = malloc(nmemb * size); /* nos dan nelementos y los bytes */
	if (a == NULL)
		return (NULL);
	for (i = 0; i < nmemb; i++)
		a[i] = 0;

	return (a);
}
