#include "holberton.h"

/**
 * _putchar - puts a char
 * @c: char
 * Return: c
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
