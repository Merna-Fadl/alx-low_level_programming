#include "main.h"
#include <stdio.h>
/**
 * more_numbers - function that prints 10 times the numbers, from 0 to 14
 * Return: 10 times the numbers, from 0 to 14
 */
void more_numbers(void)
{
	int a, b;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b <= 14; b++)
		{
			if (b > 9)
			{
				putchar((b / 10) + 48);
			}
				putchar((b % 10) + 48);
			}
			putchar('\n');
		}
}
