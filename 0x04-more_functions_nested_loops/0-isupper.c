#include "main.h"
/**
 * _isupper - Checks for uppercase
 * @c: The character to be checked
 * Return: 1 if character is uppercase, 0 if otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
