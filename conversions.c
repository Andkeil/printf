#include "holberton.h"

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
	*ip = _strcpy(buffer, s, *ip);
	return(*ip);
}

int print_d(va_list list, char *buffer, int *ip)
{
	char *s;

	s = va_arg(list, char *);
}
