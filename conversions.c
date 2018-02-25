#include "holberton.h"

int print_d(va_list list, char *buffer, int *ip)
{
	buffer[0] = 'c';
	/*when you wrote to buffer, you forgot to increment *ip*/
	(*ip)++;
	return(*ip);
}
