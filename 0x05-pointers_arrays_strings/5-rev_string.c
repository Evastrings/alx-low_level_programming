#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	char tmp;
	int i, len, lenx;

	len = 0;
	lenx = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	lenx = len - 1;

	for (i = 0; i < len / 2; i++)
	{
		tmp = s[i];
		s[i] = s[lenx];
		s[lenx--] = tmp;
	}
}
