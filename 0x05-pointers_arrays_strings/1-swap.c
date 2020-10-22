#include "holberton.h"

/**
* swap_int - swap the values
* @a: pointer
* @b: pointer
* Return: Always 0
*/
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
