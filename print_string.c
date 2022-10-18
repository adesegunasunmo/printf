#include "main.h"

/**
 * print_string- print str.
 * @v_list: gtgtg
 * @format: format str.
 * Return: int.
 */
int print_string(char *format, va_list v_list)
{
	char *string = va_arg(v_list, char *);
	int count;
	(void)format;

	if (string == NULL)
		string = "(null)";
	count = _puts(string);
	return (count);
}
