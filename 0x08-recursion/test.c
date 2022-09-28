#include <stdio.h>
#include "main.h"

void _puts_recursion(char *s)
{
        if (*s != '\0')
        {
                _putchar(*s);
                _puts_recursion(s + 1);
        }
        else
                _putchar('\n');
}
int main(void)
{
        _puts_recursion("Puts with Recursion");
        return (0);
}
