#include "holberton.h"
#include <stdio.h>
int print_c(va_list list, char *buffer, int *ip)
{
	char c;

	c = va_arg(list, int);
	*ip = buff_check(buffer, ip);
	buffer[*ip] = c;
	// remember to increment *ip
	(*ip)++;
	return(*ip);
}

int print_s(va_list list, char *buffer, int *ip)
{
	char *s;

	s = va_arg(list, char *);
	*ip = _strncpy(buffer, s, ip);
	return(*ip);
}

int print_d(va_list list, char *buffer, int *ip)
{
	char *s;

	s = va_arg(list, char *);
}

int print_percent(__attribute__((unused))va_list list, char *buffer, int *ip)
{
        *ip = buff_check(buffer, ip);
	buffer[*ip] = '%';
	(*ip)++;
        return(*ip);
}

int print_binary(va_list list, char *buffer, int *ip)
{
	char *s;
	int x;

	x = va_arg(list, int);

	if (x < 0)
	{
		*ip = buff_check(buffer, ip);
		x = (x * -1);
		buffer[*ip] = '-';
		(*ip)++;
	}
	*s = binary_string(x);
	*ip = _strncpy(buffer, s, ip);
	return (*ip);
}
