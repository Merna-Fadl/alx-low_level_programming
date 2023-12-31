#include "main.h"

/**
 *  set_bit -  function that sets the value of a bit to 1 at a given index.
 *  @n: number of index
 *  @index:  the index, starting from 0 of the bit you want to set
 *  Return: 1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
