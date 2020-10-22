#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - recieved arguments and checks if those are correct
 * @argc: arguments cant
 * @argv: vector arguments
 * Return: 0 if false, something else otherwise.
 */

int main(int argc, char *argv[])
{
	int a;
	int b;
	int (*op)(int a, int b);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	op = get_op_func(argv[2]);
	if (op == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	printf("%d\n", op(a, b));
	return (0);
}
