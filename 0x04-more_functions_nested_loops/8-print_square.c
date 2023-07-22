#include "main.h"
#include <stdio.h>
/**
 * print_square - function that prints a square, followed by a new line
 * @size: is the size of square
 * Return: Always 0
 */
void print_square(int size)
{
	int a, b;

	for (a = 1; a <= size; a++)
	{
		for (b = 1; b <= size; b++)
			putchar('#');
		putchar('\n');
	}
}
