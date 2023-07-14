#include <stdio.h>
/**
 *  main - entry point
 *
 *  Return: Always 0 (success)
 */
int main(void)
{
	int a = 48;

	while (a <= 102)
	{
		putchar(a);
		if (a == 57)
			a += 39;
		a++;
	}
	putchar('\n');
	return (0);
}
