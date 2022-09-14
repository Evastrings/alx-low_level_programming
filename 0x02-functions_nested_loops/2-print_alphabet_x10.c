#include "main.h"
/**
 * print_alphabet_x10 - Entry poiny
 * Return: 0 sucess
 */
void print_alphabet_x10(void)
{
	char me;
	int o;

	o = 0;

	while (o < 10)
	{
		me = 'a';
		while (me <= 'z')
		{
			_putchar(me);
			me++;
		}
		_putchar('\n');
		o++;
	}
}
