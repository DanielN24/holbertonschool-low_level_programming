#include "main.h"
/**
 *times_table - table
*/
void times_table(void)
{
	int p, m, r;

	for (p = 0; p <= 9; p++)
	{
		_putchar('0');
		for (m = 1; m <= 9; m++)
		{
			_putchar(',');
			_putchar(' ');
			r = p * m;
			if (r <= 9)
				_putchar(' ');
			else
				_putchar(r / 10 + '0');
			_putchar(r % 10 + '0');
		}
		_putchar('\n');
	}
}
