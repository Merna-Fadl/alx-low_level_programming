#include <stdio.h>
#include "main.h"
/**
 *  _strlen_recursion - Write a function that returns the length of a string
 *  @s: length of string
 *  Return: length of string
 */
int _strlen_recursion(char *s)
{
	int x = 0;

	if (*s > '\0')
	{
		x += _strlen_recursion(s + 1) + 1;
	}
	return (x);
}
