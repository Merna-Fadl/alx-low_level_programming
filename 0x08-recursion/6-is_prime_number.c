#include <stdio.h>
#include "main.h"
/**
 * is_prime_number - function returns 1 if the input integer is a prime number
 * @n: number
 * @othern: number
 * Return: 1 if prime number and 0 if anything else
 */
int check_prime(int n, int othern);

int is_prime_number(int n)
{
	return (check_prime(n, 2));
}

/**
 * check_prime - check number if prime or not
 * @n: value
 * @othern: value
 * Return: 0
 */
int check_prime(int n, int othern)
{
	if (othern >= n && n >= 2)
		return (1);
	else if (n % othern == 0 || n <= 1)
		return (0);
	else
		return (check_prime(n, othern + 1));
}
