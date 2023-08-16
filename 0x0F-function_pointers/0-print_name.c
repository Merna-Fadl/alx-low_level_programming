#include "function_pointers.h"

/**
 * print_name -  function that prints a name.
 * @name: name of characters
 * @f: the pointing function pointer
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
