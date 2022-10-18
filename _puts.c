#include "main.h"

/**
 * _puts - prints a string
 * new line, to stdout.
 * @string: input string
 *
 * Return: int.
 */
int _puts(char *string)
{
	int count = 0;

	while (*string)
	{
		_putchar(*string);
		string++;
		count++;
	}
	return (count);
}
