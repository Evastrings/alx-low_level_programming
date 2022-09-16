#include "main.h"
/**
 * print_number - prints an integer
 * @n: integer to print
 * Return: 0 Success
 */
void print_number(int n)
{
	unsigned int c, e, a, b, d;

	if (n == 0)
		_putchar('0');
	if (n < 0)
	{
		d = -n;
		_putchar('-');
	}
	else
		d = n;
	if (d < 10 && d > 0)
		_putchar(d + '0');
	while (d >= 10)
	{
		c = d;
		a = 0;
		b = 0;
		for (e = 0; c >= 10; e++)
		{
			if (c / 10 > 0 && c % 10 == 0)
				a++;
			else
				a = 0;
			c /= 10;
			b =  (b) ? b * 10 : 10;
		}
		_putchar(c + '0');
		while (a-- > 0)
			_putchar('0');
		d %= b;
		if (d > 0 && d < 10)
			_putchar(d + '0');
	}
}
