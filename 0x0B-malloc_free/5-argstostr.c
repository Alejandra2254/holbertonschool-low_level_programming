#include "holberton.h"
#include <stdlib.h>
/**
 * argstostr - concatenate all arguments
 * @ac: argument count
 * @av: double pointer to array of strings passed to main
 * Return: NULL if fail, else return pointer to new string
 */

char *argstostr(int ac, char **av)
{
	int i, j, lg;
	char *a;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			j++;
			lg ++;
		}
	}
	a = malloc(sizeof(char) * lg + 1);

	if (a == NULL)
	{
		return (NULL);
	}
	return (a);
}
