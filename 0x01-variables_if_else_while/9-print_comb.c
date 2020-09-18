#include <stdio.h>
/**
 * main - Entry point 
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int nm;
for (nm = '0'; nm <= '9'; nm++)
{
putchar(nm);
if (nm != '9')
{
putchar(',');
putchar(' ');
}
else
{
putchar('\n');
}
}
return (0);
}
