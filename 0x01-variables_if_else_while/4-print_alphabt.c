#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/**
 * main - Entry point
 * Return: 0 Succezs
 */
int main(void)
{
	char low, e, q;

	e = 'e';
	q = 'q';
for (low = 'a'; low <= 'z'; low++)
	if (low != e && low != q)
		putchar(low);
printf("\n");
return (0);

}