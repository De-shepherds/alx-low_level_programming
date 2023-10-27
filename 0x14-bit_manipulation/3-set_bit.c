#include "main.h"

/**
 * set_bit - Sets the value of a bit to 1 at a given index.
 * @n: Pointer to the number to set the bit in.
 * @index: The index at which to set the bit (0-based).
 *
 * Return: 1 if successful, or -1 if an error occurred.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
    if (index >= sizeof(unsigned long int) * 8)
        return -1;

    unsigned long int setbit = 1UL << index;
    *n |= setbit;
    return 1;
}

