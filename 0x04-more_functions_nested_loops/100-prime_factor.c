#include <stdio.h>

/**
 * main - largest prime factor
 * Return: 0 success
 **/
int main(void)
{
	long n = 612852475143;
	long pf;
	int i;

	for (i = 2; i <= n; i++)
	{
		if (n % i == 0)
		{
			n = n / i;
			i--;
		}
		if (n != 1)
		{
			pf = n;
		}

	}
	printf("%ld\n", pf);
	return (0);
}
