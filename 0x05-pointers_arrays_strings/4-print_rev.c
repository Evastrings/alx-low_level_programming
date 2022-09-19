#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: string
 */
void print_rev(char *s)
{
	int x, y, z;

	x = 0;
	while (s[x] != '\0')
	{
		x++;
	}
	z = x;

	for (y = z - 1; y >= 0; y--)
	{
		_putchar(s[y]);
	}
	_putchar('\n');
}
