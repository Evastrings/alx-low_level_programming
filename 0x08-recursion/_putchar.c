#include<unistd>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: 0 on success 1
 * On error, -1 is returned and error is sent appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
