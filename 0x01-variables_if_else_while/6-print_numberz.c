#include <stdio.h>
/**
 *  main - entry point
 *
 *  Return: Always 0 (success)
 */
int main(void)
{
	int a = 0;

	while (a <= 9)
	{
		putchar(a + '0');
		a++;
	}
	putchar('\n');
	return (0);
}
