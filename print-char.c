#include "main.h"

/**
 * print_char - prints a char.
 * @v_list: format of char.
 * @format: format
 *
 * Return: int
 */
int print_char(char *format, va_list v_list)
{
	(void)format;
	_putchar(va_arg(v_list, int));
	return (1);
}
