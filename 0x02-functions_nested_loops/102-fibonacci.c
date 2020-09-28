#include <stdio.h>

/**
 *main- main
 *
 *Return: 0 if success
 */

int main(void)
{
	long num1 = 0, num2 = 1, num3 = 0;
	int n;

	for (n = 1; n <= 50; n++)
	{
		num3 = num1 + num2;
		num1 = num2;
		num2 = num3;
		if (n != 50)
			printf("%ld, ", num3);
		else
			printf("%ld\n", num3);
	}
	return (0);
}
