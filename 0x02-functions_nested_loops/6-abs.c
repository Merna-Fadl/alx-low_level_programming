#include "main.h"
#include <stdio.h>
/**
 * _abs - computes the absolute value of an integer
 * @n: the number to be computed
 * Return: Absolute value of number or zero
 */
int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
