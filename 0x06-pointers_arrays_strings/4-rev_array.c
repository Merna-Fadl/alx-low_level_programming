#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * reverse_array -  function that reverses the content of an array of integer
 * @a: arry
 * @n: number of element
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int i, t;

	for (i = 0; i < n--; i++)
	{
		t = a[i];
		a[i] = a[n];
		a[n] = t;
	}
}
