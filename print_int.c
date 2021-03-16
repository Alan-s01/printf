#include "holberton.h"

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
