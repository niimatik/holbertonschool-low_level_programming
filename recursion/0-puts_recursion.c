#include <stdio.h>
#include "main.h"

/**
 * puts_recursion - print a string
 * @s: string to print
 *
 * Return: void
 */

void _puts_recursion(char *s)
{
    while (*s)
    {
        _putchar(*s);
        s++;
    }
    _putchar('\n');
}