#include "main.h"
#include <stdio.h>
/**
 * print_most_numbers - function that prints the numbers, from 0 to 9
 * Description: the number excluding 2 and 4
 * Return: the number since 0 up to 9
 */
void print_most_numbers(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
		if (a == 2 || a == 4)
		{
			continue;
		}
		else
		{
			putchar(a + 48);
		}
	}
	putchar('\n');
}
