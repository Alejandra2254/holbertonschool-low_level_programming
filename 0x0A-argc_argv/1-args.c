#include <stdio.h>
#include "holberton.h"

/**
 * main - prints
 * @argc: number of comand line arguments
 * @argv: An array
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void)argv;
	int count;

	for (count = 0; count < argc; count++)
	{
		if (count + 1 == argc)
			printf("%i\n", count);
	}
	return (0);
}
