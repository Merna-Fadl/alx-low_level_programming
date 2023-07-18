#include "main.h"
#include <stdio.h>
/**
 * times_table - prints the 9 times table
 */
void times_table(void)
{
	int num, mul, pro;

	for (num = 0; num <= 9; num++)
	{
		_putchar(48);
		for (mul = 1; mul <= 9; mul++)
		{
			_putchar(',');
			_putchar(' ');

			pro = num * mul;
if (pro <= 9)
{
_putchar(pro + 48);
}
else
{
_putchar((pro / 10) + 48);
_putchar((pro % 10) + 48);
}
}
_putchar('\n');
}
}
