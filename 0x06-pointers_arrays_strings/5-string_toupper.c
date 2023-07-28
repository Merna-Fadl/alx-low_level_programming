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
	int i;

	for (i = 0; n[i] != '\0'; i++)
	{
		if (n[i] >= 97 && n[i] <= 122)
		{
			n[i] = n[i] - 32;
		}
	}
	return (0);
}
