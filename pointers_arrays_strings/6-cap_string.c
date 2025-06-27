#include <stdio.h>
#include <stdio.h>

/**
 * cap_string - capitalizes all words of a string
 * @s: string to capitalizes all words
 *
 * Return: s
 */

char *cap_string(char *s)
{
int a = 0, b, c = 13;

char t[] = {32, '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};

while (s[a])
{
b = 0;
while (b < c)
{
if ((a == 0 || s[a - 1] == t[b]) && (s[a] >= 'a' && s[a] <= 'z'))
{
	s[a] -= 32;
}
b++;
}
a++;
}
return (s);
}
