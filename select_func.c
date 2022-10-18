
#include "main.h"

/**
 * select_func - function to select the right function.
 * @format: string.
 *
 * selector[] struct of type struct_t.
 * Return:  pointer
 * struct_t selector - Struct
 */

int (*select_func(char *format))(char *format, va_list)
{
int i;




/**
 * selector - struct type struct_t
 *
 **/

struct_t selector[] = {
{"%c", print_char},
{"%s", print_string},
{"%d", printint},
{"%i", printint},
{NULL, NULL}
};

if (format[1] == ' ' || format[1] == '\0')
return (NULL);
for (i = 0; selector[i].q; i++)
{
if (format[1] == selector[i].q[1])
return (selector[i].u);
}
return (NULL);
}
