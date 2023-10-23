#include <stdio.h>

/**
 * pre_main - Function executed before main.
 * Return: No return value.
 */
void __attribute__ ((constructor)) pre_main()
{
	printf("You're beat! And yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

