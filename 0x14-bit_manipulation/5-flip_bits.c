#include "main.h"

/**
 * Flip_bits - Counts the number of bits to flip to get from n to m.
 * @n: The first unsigned long integer.
 * @m: The second unsigned long integer.
 *
 * Return: The number of bits to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int outcome = n ^ m;
	unsigned int count = 0;

	while (outcome > 0)
	{
		count += outcome & 1;
		outcome >>= 1;
	}

	return count;
}

