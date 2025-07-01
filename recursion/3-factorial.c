#include <stdio.h>
#include "main.h"

/**
 * factorial - return the factorial of a given number
 * @n: the number to calculate the factorial
 * 
 * Return: integer value
 */

int factorial(int n)
{
    if (n < 0)
    {
        return (-1);
    }
    else if (n == 0)
    {
        return (1);
    }

    return (n * factorial(n - 1));
}