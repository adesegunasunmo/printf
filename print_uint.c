#include "main.h"


/**
 * print_uint - print unsigned int
 *
 * @format: formatted text
 * @v_list: variadic list
 *
 * Return: int
 **/



int print_uint(char *format, va_list v_list)
{
unsigned int conv = va_arg(v_list, unsigned int);
int count;
(void)format;


un_int(conv);
count = find_space(conv, 10);
return (count);
}



/**
 * un_int - print unsigned int
 *
 * @conv: unsigned int
 *
 * Return: int
 **/

int un_int(unsigned int conv)
{
if (conv >= 10)
{
un_int(conv / 10);
}
_putchar((conv % 10) + '0');
return (0);
}










/**
 * countunint - counts the digits.
 * @number: input unsigned integer
 * Return: digit count
 */
int countunint(unsigned int number)
{
int count = 0;
int number2 = number;

if (number <= 0)
count += 1;

while (_abs(number2) != 0)
{
number2 = number2 / 10;
count++;
}
return (count);
}
