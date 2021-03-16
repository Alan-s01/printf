#include "holberton.h"

/**
 * _printf - prints a format
 * @format: format
 * Return: format
 */

int _printf(const char *format, ...)
{
	va_list list;
	unsigned int i = 0;
	int p;

	t_printf functions[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{"d", print_int},
		{"i", print_int},
		{NULL, NULL}
	};

	if (format == NULL)
		return (-1);

	va_start(list, format);
	p = checkfun(format, functions, list);
	va_end(list);
	return (p);
}

