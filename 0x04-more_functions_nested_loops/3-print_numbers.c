#include "main.h"
#include <unistd.h>
#include <stdio.h>
/**
 * print_numbers -  function that prints the numbers, from 0 to 9
 *Return: the number since 0mup to 9
 */
void print_numbers(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
		putchar(a + 48);
	}
	putchar('\n');
}
