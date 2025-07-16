#ifndef main_h
#define main_h
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_char(char *separator, va_list args);
void print_int(char *separator, va_list args);
void print_float(char *separator, va_list args);
void print_char_st(char *separator, va_list args);

/**
 * struct format_type - struct format_type
 */
typedef struct format_types
{
	char *identifier;
	void (*f)(char *separator, va_list args);
} f_ty;

#endif
