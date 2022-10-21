#include "main.h"

/**
 * print_binary - print binary unsigned int
 *
 * @format: formatted string
 * @v_list: variadic list
 *
 * Return: int
 **/


int print_binary(char *format, va_list v_list)
{
int i = 0;
unsigned int conv = va_arg(v_list, unsigned int), count;
int space = find_space(conv, 2);
char *reverse = malloc(space);
(void)format;

while (conv != 0)
{
reverse[i] = (conv % 2) + '0';
conv = conv / 2;
i++;
}
reverse[i] = '\0';
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



/**
 * find_space -determine how much space for malloc
 * @conv: number to check for
 * @base: base of the number
 *
 * Return: int
 **/




int find_space(unsigned int conv, int base)
{
unsigned int calc = conv;
int i = 0;
while (calc != 0)
{
calc = calc / base;
i++;
}

return (i);
}
