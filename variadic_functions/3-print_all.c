#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - print all args
 * @format: list of type argument
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list args;
	f_ty frmt[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_char_st},
	};
	unsigned int a = 0, b = 0;
	char *separator = "";

	va_start(args, format);

	while (format != NULL && format[a])
	{
		b = 0;
		while (b < 4)
		{
			if (format[a] == *frmt[b].identifier)
			{
				frmt[b].f(separator, args);
				separator = ", ";
			}
			b++;
		}
		a++;
	}
	va_end(args);
	printf("\n");

}

/**
 * print_char - print a char
 * @separator: the string between
 * @args: the list of variadic argument
 *
 * Return: void
 */

void print_char(char *separator, va_list args)
{
	printf("%s%c", separator, va_arg(args, int));
}

/**
 * print_int - print a int
 * @separator: the string between
 * @args: the list of variadic argument
 *
 * Return: void
 */

void print_int(char *separator, va_list args)
{
	printf("%s%i", separator, va_arg(args, int));
}

/**
 * print_float - print a float
 * @separator: the string between
 * @args: the list of variadic argument
 *
 * Return: void
 */
void print_float(char *separator, va_list args)
{
	printf("%s%f", separator, va_arg(args, double));
}

/**
 * print_char_st - print a string
 * @separator: the string between
 * @args: the list of variadic argument
 *
 * Return: void
 */

void print_char_st(char *separator, va_list args)
{
	char *arg = va_arg(args, char*);

	if (arg == NULL)
	{
		printf("%s%s", separator, "(nil)");
		return;
	}
	printf("%s%s", separator, arg);
}
