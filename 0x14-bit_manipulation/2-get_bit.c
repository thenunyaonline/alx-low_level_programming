#include "main.h"
#include <stddef.h>

/**
 * get_bit - gets the value of bit in an index
 * @index: index of bit
 * @n: number to be checked
 * Return: 1 or 0
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	if (index > sizeof(size_t) * 8)
		return (-1);

	for (i = 0; i < index; i++)
		n = n >> 1;
	return ((n & 1));
}
