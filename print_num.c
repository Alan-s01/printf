#include "holberton.h"
/**
 * print_num - prints nums
 * @arg_list: list
 * Return: lenght
 */
int print_num(va_list arg_list)
{
	int n, div, len;
	unsigned int num;

	n = va_arg(arg_list, int);
	div = 1;
	len = 0;
	if (n < 0)
	{
		len += _putchar('-');
		num = n * 1;
	}
	else
		num = n;
	for (; num / div > 9;)
		div *= 10;
	for (; div != 0;)
	{
		len += _putchar('0' + num / div);
		num %= div;
		div /= 10;
	}
	return (len);
}
