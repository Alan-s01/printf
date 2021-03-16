#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...);
int checkfuns(const char *format, t_printf funs[], va_list arg_list);
int _putchar(char c);

typedef struct t_print
{
char *type;
int (*f)(va_list);
} t_printf;

#endif

