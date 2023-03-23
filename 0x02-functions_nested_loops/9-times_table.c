#include "main.h"
/**
 *times_table-function prints nine time table
 */
void times_table(void)
{
	int i, j, k, v, u;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			k = i * j;
			if (k > 9)
			{
				u = k % 10;
				v = (k - u) / 10;
				_putchar(44);
				_putchar(32);
				_putchar(v + '0');
				_putchar(u + '0');
			}
			else
			{
				if (j != 0)
				{
					_putchar(44);
					_putchar(32);
					_putchar(32);
				}
				_putchar(k + '0');
			}
		}
		_putchar('\n');
	}
}
