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

