#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number to print
 */
void print_binary(unsigned long int n)
{
	int shift;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	shift = (sizeof(unsigned long int) * 8) - 1;
	while ((n >> shift) == 0)
		shift--;

	while (shift >= 0)
	{
		if ((n >> shift) & 1)
			_putchar('1');
		else
			_putchar('0');
		shift--;
	}
}

