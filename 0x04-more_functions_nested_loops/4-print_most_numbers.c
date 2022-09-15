#include "main.h"
/**
 * print_most_numbers - print 0 - 9 except 2 & 4
 */
void print_most_numbers(void)
{
	int ev;

	for (ev = 0; ev <= 9; ev++)
	{
		if (ev != 2 && ev != 4)
			_putchar((ev % 10) + '0');
	}
	_putchar('\n');
}
