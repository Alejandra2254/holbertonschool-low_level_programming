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
	int i, j, lg, k, l;
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
	lg = 0;
	for (k = 0; k < ac; k++)
	{
		for (l = 0; av[k][l] != '\0'; l++)
		{
			a[lg] = av[k][l];
			lg++;
		}
		a[lg] = '\n';
		lg++;
	}
	return (a);
}
