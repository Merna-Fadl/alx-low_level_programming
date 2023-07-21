#include "main.h"
#include <stdio.h>
/**
 *_isdigit - function that checks for a digit
 * @n: the number to be checked
 * Return: 1 if c is a digit or 0 for anything
 */
int _isdigit(int n)
{
	if (n >= 48 && n <= 57)
	{
		return (1);
	}
	return (0);
}
