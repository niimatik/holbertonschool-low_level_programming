#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - print a string
 * @separator: string to print between string
 * @n: number of string
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int a = 0;
	char *string;

	if (n > 0)
	{
		va_start(args, n);

		while (a < n)
		{
			string = va_arg(args, char*);

			if (string == NULL)
			{
				printf("(nil)");
			}
			else
			{
				printf("%s", string);
			}

			if (a != n - 1 && separator != NULL)
			{
				printf("%s", separator);
			}
			a++;
		}
		va_end(args);
	}
	printf("\n");
}
