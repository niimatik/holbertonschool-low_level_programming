#include <stdio.h>
#include "main.h"

/**
* _strchr - locate a charactere in a string
* @s: source string
* @c: charactere to locate
*
* Return: s
 */

char *_strchr(char *s, char c)
{
    int a = 0, b;

    while (s[a])
    {
        a++;
    }  

    for (b = 0; b <= a; b++)
    {
        if (c == s[b])
        {
            s += b;
            return (s);
        }

    }
    return ('\0');
}