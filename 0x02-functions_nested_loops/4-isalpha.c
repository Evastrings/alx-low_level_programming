#include "main.h"
/**
 * _isalpha - Entry point
 * @c: character
 * Return: 0
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c < 'Z'));
}
