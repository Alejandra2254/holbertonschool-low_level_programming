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
	int count;

	for (count = 0; count < argc; count++)
	{
		printf("%s\n", argv[count]);
	}
	return (0);
}
