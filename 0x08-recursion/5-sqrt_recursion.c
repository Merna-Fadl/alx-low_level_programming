#include <stdio.h>
#include "main.h"

int actual_sqrt(int n, int i);

/**
 * _sqrt_recursion - function returns the natural square root of a number
 * @n: value
 * Return: -1 If n does not have a natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt(n, 0));
}
/**
 * actual_sqrt - recurses to find the natural
 * @n: number
 * @i: iterator
 * Return: the result of square root
 */
int actual_sqrt(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt(n, i + 1));
}
