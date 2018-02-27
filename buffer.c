#include <stdio.h>
#include "holberton.h"
/**
 * buff_reset- main for writing and resetting the buffer
 * @buffer: pointer to current buffer
 * @ip: current index of buffer
 * Return: int pointer
 */
void buff_reset(char *buffer, int *ip)
{
	int i;

	for (i = 0; i < 1024; i++)
		buffer[i] = 0;
	*ip = 0;
}
/**
 * buff_check- checking to see if buffer is full if true will write and reset
 * @buffer: pointer to current buffer
 * @ip: current index of buffer
 * Return: int pointer
 */
int buff_check(char *buffer, int *ip)
{
	if (*ip >= 1024)
	{
		write(1, buffer, 1024);
		buff_reset(buffer, ip);
	}
	return (*ip);
}
