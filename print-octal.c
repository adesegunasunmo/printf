#include "main.h"

/**
 * print_octal - print unsigned int in octal
 *
 * @format: format string
 * @v_list: variadic list
 *
 * Return: int
 **/




int print_octal(char *format, va_list v_list)
{
int i = 0, count;
unsigned int conv = va_arg(v_list, unsigned int);
int space = find_space(conv, 8);
char *reverse = malloc(space);
(void)format;

while (conv != 0)
{
reverse[i] = (conv % 8) + '0';
conv = conv / 8;
i++;
}
i--;

while (i > -1)
{
count++;
_putchar(reverse[i]);
i--;
}

free(reverse);
return (space);
}
