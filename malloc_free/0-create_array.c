#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * create_array - create an array of char
 * @size: the size of the array
 * @c: the char to initializes it with
 *
 * Return: s
 */

char *create_array(unsigned int size, char c)
{
    unsigned int a;
    char* b;

    if (size == 0)
    {
        return (NULL);
    }

    b = malloc(size * sizeof(char));

    if (b == NULL)
    {
        return (NULL);
    }

    for (a = 0; a < size; a++)
    {
        b[a] = c;
    }
    return (b);
}
