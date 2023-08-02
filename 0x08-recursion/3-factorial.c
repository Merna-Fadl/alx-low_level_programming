#include <stdio.h>
#include "main.h"
/**
 * factorial - function that returns the factorial of a given numbe
 * @n: lower than 0
 * Return: -1  to indicate an error
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
