#include <unistd.h>
#include "main.h"
/**
 * _putchar - writes the character c to stdout
 * @c: the character to print
 * Return: Always 1 (success)
 * on error, -1 is return
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

