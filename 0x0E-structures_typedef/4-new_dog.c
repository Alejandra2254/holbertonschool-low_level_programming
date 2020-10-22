#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *new_dog - new dog user
 *@name: pointer to dog´s name
 *@age: variable with dog´s age
 *@owner: pointer to owner´s name
 *Return: new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int i = 0, j = 0, k;
	dog_t *cop;

	while (name[i] != '\0')
		i++;

	while (owner[j] != '\0')
		j++;
	cop = malloc(sizeof(dog_t));

	if (cop == NULL)
	{
		free(cop);
		return (NULL);
	}
	cop->name = malloc(i * sizeof(cop->name));
	if (cop->name == NULL)
	{
		free(cop->name);
		free(cop);
		return (NULL);
	}

	for (k = 0; k <= i; k++)
		cop->name[k] = name[k];
	cop->age = age;

	cop->owner = malloc(j * sizeof(cop->owner));

	if (cop->owner == NULL)
	{
		free(cop->owner);
		free(cop->name);
		free(cop);
		return (NULL);
	}

	for (k = 0; k <= j; k++)
		cop->owner[k] = owner[k];
	return (cop);
}
