#include <stdio.h>
#include "main.h"
/**
 * _puts_recursion -  function that prints a string
 * @s: string
 * Return: 0
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
	}
	else
	{
		putchar(*s);
		_puts_recursion(s + 1);
	}
}
