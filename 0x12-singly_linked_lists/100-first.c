#include <stdio.h>
/**
 * __attribute__ ((constructor)) myConstructor - function to execute first
 */
void __attribute__ ((constructor)) myConstructor()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
