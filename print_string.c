#include "holberton.h"

/**
 * print_string - prints a string
 * @arg_list: list
 * Return: 1
 */

int print_string(va_list arg_list)
{
	int i;
	char *s;

	s = va_arg(arg_list, char *);
	if (s == NULL)
		s = "(NULL)";
	for (i = 0; s[i] != '\0'; i++)
		_putchar(s[i]);
	return (i);
}
