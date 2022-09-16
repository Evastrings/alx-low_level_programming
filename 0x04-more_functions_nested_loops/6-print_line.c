#include "main.h"
/**
 * print_line - draws a straight line
 * @n: numbers of lines
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int j;

		for (j = 1; j <= n; j++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}

}
