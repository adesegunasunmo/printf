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
int printint(char *format, va_list v_list);
int integer(int number);
int un_int(unsigned int number);
int count(int number);
int countdigit(int number);
int countunint(unsigned int number);
int find_space(unsigned int conv, int space);
int _abs(int number);
int print_percent(char *format, va_list v_list);
int print_binary(char *format, va_list v_list);
int print_octal(char *format, va_list v_list);
int print_hex_low(char *format, va_list v_list);
int print_hex_upper(char *format, va_list v_list);
int print_uint(char *format, va_list v_list);
#endif
