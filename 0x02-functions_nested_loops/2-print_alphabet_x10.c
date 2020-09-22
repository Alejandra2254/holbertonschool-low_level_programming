#include "holberton.h"
/**
 * print_alphabet_x10 - print 10 times alphabet
 * print_alphabet - prints alphabet
 * Return: void
 */
void print_alphabet_x10(void)
{
int i = 0;
while (i < 10)
{
print_alphabet();
i++;
}
}
/**
 * print_alphabet - prints alphabet
 * Return: void
 */
void print_alphabet(void)
{
char c = 'a';
while (c <= 'z')
{
_putchar(c);
c++;
}
_putchar('\n');
}
