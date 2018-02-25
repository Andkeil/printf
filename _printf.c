#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include "holberton.h"
#include <stdio.h>
int _printf2(const char *format, ...)
{
	int i = 0, index = 0, *ip = &index;
	int (*get_format)(va_list, char *, int *);

	char buffer[1024];
	va_list list;

	va_start(list, format);

	while (format != NULL && format[i])
	{
		if (format[i] !='%' && format[i-1] != '%')
		{
			buffer[*ip] = format[i];
			(*ip)++;
		}
		else if (format[i] == '%')
		{
			get_format = formatter(format[i + 1]);
			get_format(list, buffer, ip);
		}
		i++;
	}
	va_end(list);
	write(1, buffer, index);
//	free(buffer); /* free buffer */
	return (index);
}