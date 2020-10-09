#include <stdio.h>
#include "holberton.h"
#include <stdlib.h>

/**
 * main - prints
 * @argc: number of comand line arguments
 * @argv: An array
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int num1, num2, m;

	if (argc == 3)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		m = num1 * num2;
		printf("%d\n", m);
	}
	else
		printf("Error\n");
	return (0);
}
