#include "holberton.h"

int print_c(va_list list, char *buffer, int *ip)
{
	char c;

	c = va_arg(list, int);
	buffer[*ip] = c;
	/*when you wrote to buffer, you forgot to increment *ip*/
	(*ip)++;
	return(*ip);
}
