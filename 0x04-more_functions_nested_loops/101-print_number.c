#include <stdio.h>
#include "main.h"
/**
 * print_number - prints numbers
 * @n: number to be printed
 */
void print_number(int n)
{
	unsigned int x;

	if (n < 0)
	{
		x = -n;
		_putchar('_');
	}
	else
	{
		x = n;
	}

	if (x / 10)
	{
		print_number(x / 10);
	}

	_putchar((x % 10) + '0');
}
