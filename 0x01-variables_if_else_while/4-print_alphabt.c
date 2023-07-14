#include <stdio.h>
/**
 *  main - entry point
 *
 *  Return: Always 0 (success)
 */
int main(void)
{
	char lowercase = 'a';

	while (lowercase <= 'z')
	{
		if (lowercase == 'e' || lowercase == 'q')
			lowercase++;
		putchar(lowercase);
		lowercase++;
	}
	putchar('\n');
	return (0);
}
