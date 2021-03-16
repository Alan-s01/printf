#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

int _printf(const char *format, ...);

typedef struct t_print
{
char *type;
int (*f)();
} t_printf;

#endif

