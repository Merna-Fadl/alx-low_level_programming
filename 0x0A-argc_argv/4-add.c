#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/**
 * main - it all start here
 * @argc: num of arg
 * @argv: array of pointer
 * Return: 0
 */
int main(int argc, char const *argv[])
{
	int i;
	unsigned int k, sum = 0;
	const char *e;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			e = argv[i];

			for (k = 0; k < strlen(e); k++)
			{
				if (e[k] < 48 || e[k] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(e);
			e++;
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
