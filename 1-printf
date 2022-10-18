#include "main.h"

/**
 * _printf - prints formatted string 
 * @format: formattes string
 * Return: int
 */
int _printf(char *format, ...)
{
	int count = 0, (*structype)(char *, va_list);
	char spec[3];
	va_list v_list;

	if (format == NULL)
		return (-1);
	spec[2] = '\0';
	va_start(v_list, format);
	_putchar(-1);
	while (format[0])
	{
		if (format[0] == '%')
		{
			structype = select_func(format);
			if (structype)
			{
				spec[0] = '%';
				spec[1] = format[1];
				count += structype(spec, v_list);
			}
			else if (format[1] != '\0')
			{
				count += _putchar('%');
				count += _putchar(format[1]);
			}
			else
			{
				count += _putchar('%');
				break;
			}
			format += 2;
		}
		else
		{
			count += _putchar(format[0]);
			format++;
		}
	}
	_putchar(-2);
	return (count);
}
