#include "holberton.h"

/**
 * print_char - prints a char
 * @arg_list: list
 * Return: 1
 */

int print_char(va_list arg_list)
{
	_putchar(va_arg(arg_list, int));
	return (1);
}

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

/**
 * print_percent - prints a percent
 * @arg_list: list
 * Return: 1
 */

int print_percent(__attribute__((unused))va_list arg_list)
{
	_putchar('%');
	return (1);
}

/**
 * print_int - prints a int
 * @arg_list: list
 * Return: lenght
 */

int print_int(va_list arg_list)
{
	int len;

	len = print_num(arg_list);
	return (len);
}

