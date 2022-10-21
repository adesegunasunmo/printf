#include "main.h"


/**
 * print_hex_low - print lowercase hexadecimal
 *
 * @format: format string
 * @v_list: variadic list
 *
 * Return: int
 **/


int print_hex_low(char *format, va_list v_list)
{
int i = 0, j;
unsigned int conv = va_arg(v_list, unsigned int), insert;
int space = find_space(conv, 16);
char *reverse = malloc(space);
j = space;

(void)format;

while (j != 0)
{
insert = conv % 16;
if (insert > 9)
{
reverse[i] = (insert - 10) + 'a';
}
else
{
reverse[i] = insert + '0';
}
i++;
j--;
conv = conv / 16;
}


i--;

while (i > -1)
{
_putchar(reverse[i]);
i--;
}

free(reverse);
return (space);
}




/**
 * print_hex_upper - print lowercase hexadecimal
 *
 * @format: format string
 * @v_list: variadic list
 *
 * Return: int
 **/



int print_hex_upper(char *format, va_list v_list)
{
int i = 0, j;
unsigned int conv = va_arg(v_list, unsigned int), insert;
int space = find_space(conv, 16);
char *reverse = malloc(space);
j = space;




(void)format;

while (j != 0)
{
insert = conv % 16;
if (insert > 9)
{
reverse[i] = (insert - 10) + 'A';
}
else
{
reverse[i] = insert + '0';
}
i++;
j--;
conv = conv / 16;
}


i--;

while (i > -1)
{
_putchar(reverse[i]);
i--;
}

free(reverse);
return (space);
}

