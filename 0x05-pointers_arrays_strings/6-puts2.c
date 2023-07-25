#include <stdio.h>
#include "main.h"
/**
 * puts2 - function that prints every other character of a string
 * @str: character of string
 * Return: nothing
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; ++i)
	{
		if (i % 2 == 0)
			putchar(str[i]);
	}
	putchar('\n');
}
