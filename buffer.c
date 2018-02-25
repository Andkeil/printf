#include <stdio.h>
#include "holberton.h"

void buff_reset(char *buffer, int *ip)
{
	int i;

	for (i = 0; i < 1024; i++)
		buffer[i] = 0;
	*ip = 0;
}

int buff_check(va_list list, char *buffer, int *ip)
{
	if (*ip >= 1024)
	{
		write(1, buffer, 1024);
		buff_reset(buffer, ip);
	}
}
