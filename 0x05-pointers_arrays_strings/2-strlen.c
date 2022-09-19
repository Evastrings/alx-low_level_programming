#include "main.h"
/**
 * _strlen - prints length of string
 * @s: strings
 * Return: lenght of string
 */
int _strlen(char *s)
{
	int x;

	x = 0;

	while (s[x] != '\0')
	{
		x++;
	}

	return (x);
}
