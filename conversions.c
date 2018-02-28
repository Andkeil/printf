#include "holberton.h"
#include <stdio.h>
/**
 *print_c- main for returning a character if %c is passed
 * @list: list being passed in
 * @buffer: current buffer
 * @ip: index pointer
 * Return: current index position
 */

int print_c(va_list list, char *buffer, int *ip)
{
	char c;

	c = va_arg(list, int);
	*ip = buff_check(buffer, ip);
	buffer[*ip] = c;
	(*ip)++;
	return (*ip);
}
/**
 *print_s- main for returning a string if %s is passed
 * @list: list being passed in
 * @buffer: current buffer
 * @ip: current index pointer
 * Return: current index position
 */

int print_s(va_list list, char *buffer, int *ip)
{
	char *s;

	s = va_arg(list, char *);
	*ip = _strncpy(buffer, s, ip);
	return (*ip);
}
/**
 *print_d- main for returning an int if %d is passed
 * @list: list being passed in
 * @buffer: current buffer
 * @ip: current index pointer
 * Return: current index position
 */

int print_d(va_list list, char *buffer, int *ip)
{
	char *s;
	int x;

	x = va_arg(list, int);
	if (x < 0)
	{
		buffer[*ip] = '-';
		(*ip)++;
	}
	s = tostring(x);
	*ip = _strncpy(buffer, s, ip);
	return (*ip);
}
/**
 *print_percent- main for returning an % if % is passed
 * @list: list being passed in
 * @buffer: current buffer
 * @ip: current index pointer
 * Return: current index position
 */
int print_percent(__attribute__((unused))va_list list, char *buffer, int *ip)
{
	*ip = buff_check(buffer, ip);
	buffer[*ip] = '%';
	(*ip)++;
	return (*ip);
}
/**
 *print_binary- main for returning a negative number
 * @list: list being passed in
 * @buffer: current buffer
 * @ip: current index pointer
 * Return: current index position
 */
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
	s = binary_string(x);
	*ip = _strncpy(buffer, s, ip);
	return (*ip);
}
