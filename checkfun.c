#include "holberton.h"

/**
 * checkfun - checks functions list
 * @format: format
 * @funs: functions
 * @arg_list: list
 * Return: p
 */

int checkfun(const char *format, t_printf funs[], va_list arg_list)
{
	int i, c, v, p = 0;

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			for (c = 0; funs[c].type != NULL; c++)
			{
				if (format[i + 1] == funs[c].type[0])
				{
					v = funs[c].f(arg_list);
					if (v == -1)
						return (-1);

					p += v;
					break;
				}
			}
			if (funs[c].type == NULL && format[i + 1] != ' ')
			{
				if (format[i + 1] != '\0')
				{
					_putchar(format[i]);
					_putchar(format[i + 1]);
					p = p + 2;
				}
				else
					return (-1);
			}
			i + i = 1;
		}
		else
		{
			_putchar(format[i]);
			p++;
		}
	}
	return (p);
}

