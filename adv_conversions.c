#include "holberton.h"
#inlcude <stdarg.h>
/**
 *print_rot- main for converting into rot13
 * @list: stores given string into the list
 * @buffer: char pointer to buffer function
 * @ip: int pointer to the index pointer where we curretly are in func
 * Return: the int pointer
 */

int print_rot(va_list list, char *buffer, int *ip)
{
	char *s;
	int i, j;

	char *rot1 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *rot2 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	s = va_arg(list, char *);
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; rot2[j] != '\0'; j++)
		{
			if (s[i] == rot1[j])
			{
				*ip = buff_check(buffer, ip);
				buffer[*ip] = rot2[j];
				(*ip)++;
			}
		}
	}
	return (*ip);
}
/**
 *print_rev- main for printing in reverse
 * @list: stores string
 * @buffer: char pointer to buffer function
 * @ip: int pointer to ip (index pointer)
 * Return: the in pointer
 */
int print_rev(va_list list, char *buffer, int *ip)
{
	char *s;
	int i, j;

	s = va_arg(list, char *);
	j = _strlen(s) - 1;
	for (i = j; i >= 0; i--)
	{
		buff_check(buffer, ip);
		buffer[*ip] = s[i];
		(*ip)++;
	}
	return (*ip);
}
