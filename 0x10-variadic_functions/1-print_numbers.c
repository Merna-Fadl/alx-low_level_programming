#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers, followed by a new line.
 * @separator: string to be printed between numbers
 * @n:  number of integers passed to the function
 * @...: the integer to print
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i = n;
	va_list arg;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(arg, n);
	while (i--)
		printf("%d%s", va_arg(arg, int),
				i ? (separator ? separator : "") : "\n");
	va_end(arg);
}
