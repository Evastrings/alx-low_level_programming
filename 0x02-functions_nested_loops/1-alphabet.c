#include "main.h"
/**
 * print_alphabet - Entry point
 * Return:0 succes
 */
void print_alphabet(void)
{
	char me;

	for (me = 'a'; me <= 'z'; me++)
		_putchar(me);

	_putchar('\n');
}
