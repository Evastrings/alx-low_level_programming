#include "main.h"
/**
 * _puts - prints a string to stdout
 * @str: strings to be printed
 */
void _puts(char *str)
{
	int yy;

	for (yy = 0; str[yy] != '\0'; yy++)
	{
		_putchar(str[yy]);
	}
	_putchar('\n');
}
