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
	int count = argc -1;

	printf("%d\n", count);
	return (0);
}
