#include "main.h"

/**
 * flip_bits - function that returns the number of bit
 * @n: 1st number
 * @m: 2nd number
 * Return: num of bits to fib
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xorval = n ^ m;
	unsigned int count = 0;

	while (xorval)
	{
		if (xorval & 1ul)
			count++;
		xorval = xorval >> 1;
	}
	return (count);
}
