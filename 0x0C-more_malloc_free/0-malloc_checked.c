#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * malloc_checked - function that allocates memory using malloc
 * @b: unsing int
 * Return:  pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	int *m = malloc(b);

	if (m == 0)
		exit(98);

	return (m);
}
