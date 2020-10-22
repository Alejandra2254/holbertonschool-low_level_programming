#include<stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int nm;
for (nm = 0; nm < 100 ; nm++)
{
putchar((nm / 10) + '0');
putchar((nm % 10) + '0');
if (nm != 99)
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
