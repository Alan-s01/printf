#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...);
int checkfuns(const char *format, t_printf funs[], va_list arg_list);
int _putchar(char c);
int print_char(va_list arg_list);
int print_string(va_list arg_list);
int print_percent(__attribute__((unused))va_list arg_list);
int print_int(va_list arg_list);
int print_num(va_list arg_list);

typedef struct t_print
{
char *type;
int (*f)(va_list);
} t_printf;

#endif

