#include "main.h"
#include <stdio.h>
#include <unistd.h>
/**
 * print_alphabet - Make the alphabet
 *
 * Return: void
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
}
