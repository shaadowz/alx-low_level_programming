#include "main.h"

/**
 * times_table - print the 9 times table, starting with zero.
 *
 */
void times_table(void)
{
	int x;
	int i;

	for (x = 0; x <= 9; x++)
	{
		_putchar('0');
		for (i = 1; i <= 9; i++)
		{
			int result = x * i;

			_putchar(',');
			_putchar(' ');
			(result <= 9) ?
			_putchar(' ') :
			_putchar('0' + (result / 10));
			_putchar('0' + (result % 10));
		}
	_putchar('\n');
	}
}
