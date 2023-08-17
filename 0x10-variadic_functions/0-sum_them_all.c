#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all -  function that returns the sum of all its parameters
 * @n: the number of arguments
 * @...: the integer to sum
 * Return: the integer sum
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0, i = n;

	va_list arg;

	if (!n)
		return (0);
	va_start(arg, n);
	while (i--)
		sum += va_arg(arg, int);
	va_end(arg);
	return (sum);
}
