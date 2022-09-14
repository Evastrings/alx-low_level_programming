#include "main.h"
/**
 * print_last_digit - Entry point
 * @n: The number in question
 * Return: Value of last digit - int
 */
int print_last_digit(int n)
{
	int me = n % 10;

	if (me < 0)
		me *= -1;
	_putchar(me + '0');

	return (me);
}
