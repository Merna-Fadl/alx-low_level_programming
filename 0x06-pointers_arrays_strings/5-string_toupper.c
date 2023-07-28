#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * string_toupper - function that changes all lowercase letterse
 * @n: pointer
 * Return: Always 0.
 */
char *string_toupper(char *n)
{
	int i = 0;

	while (n[i] != '\0')
	{
		if (n[i] >= 'a' && n[i] <= 'z')
		{
			n[i] = n[i] - 32;
		}
		i++;
	}
	return (0);
}
