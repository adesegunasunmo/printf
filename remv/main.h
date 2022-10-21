#ifndef mainh
#define mainh

#include <stdarg.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * struct structprint - structure containing
 * @q: the location and method to translate data to characters.
 * @u: print function for specific type.
 *
 * Return: int
 */
typedef struct structprint
{
	char *q;
	int (*u)(char *format, va_list);
} struct_t;

int _putchar(char ch);
int _puts(char *string);
int print_char(char *format, va_list);
int print_string(char *format, va_list);
int (*select_func(char *format))(char *format, va_list);
int _printf(char *format, ...);
int printint(char *format, va_list pa);
int integer(int number);
int count(int number);
int _abs(int number);
int print_percent(char *format, va_list pa);
#endif
