#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _strncat -  function is similar to the _strcat function, except that
 * @dest: pointer
 * @src: pointer
 * @n: number of bytes
 * Return: pointer to the resulting string @dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int c, i;

	c = 0;

	while (dest[c])
		c++;
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[c + i] = src[i];
	dest[c + i] = '\0';
	return (dest);
}
