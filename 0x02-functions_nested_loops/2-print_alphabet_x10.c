#include "holberton.h"
/**
 * main
 * program print 10 times alphabet
 * Return
 */
void print_alphabet_x10(void)
{
int i = 0;
while(i<10)
{
print_alphabet();
i++;
}
}
/**
 * alphabet
 *
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
