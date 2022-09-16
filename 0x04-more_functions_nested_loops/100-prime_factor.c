#include <stdio.h>
#include <stdlib.h>
/**
 * main - Finds and prints the largest prime factor
 * of the number 612852475143
 *
 * Return: 0 success
 */
int main(void)
{
	unsigned long y = 612852475143;
	unsigned long x = 2;

	while (y)
	{
		if (y / x > 0 && y % x == 0)
			y /= x;
		else if (y / x > 0 && y % x != 0)
			x++;
		else
			break;
	}
	printf("%ld\n", x);
	return (0);
}
