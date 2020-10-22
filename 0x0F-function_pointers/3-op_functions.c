#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>

/**
 * op_add - function to add
 * @a: first number
 * @b: second number
 * Return: result of operation
 */
int op_add(int a, int b)
{
	int sum;

	sum = a + b;
	return (sum);
}
/**
 * op_sub - function subtraction
 * @a: first number
 * @b: second number
 * Return: result of operation
 */
int op_sub(int a, int b)
{
	int res;

	res = a - b;
	return (res);
}
/**
 * op_mul - mul subtraction
 * @a: first number
 * @b: second number
 * Return: result of operation
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - function division
 * @a: first number
 * @b: second number
 * Return: result of operation
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("error\n");
		return (100);
	}
	return (a / b);
}
/**
 * op_mod - function modulo
 * @a: first number
 * @b: second number
 * Return: result of operation
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("error\n");
		return (100);
	}
	return (a % b);
}
