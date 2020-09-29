File Edit Options Buffers Tools C Help
#include "holberton.h"
/**
 * print_rev - prints a string
 * @str - string
 * Return: string
 */
void print_rev(char *s);
{
	int i;

	for (i = 0; str[i] != '\0' ; i--)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
