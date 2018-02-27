#include "holberton.h"
/**
 * _strlen - main function
 * Return: length of string
 * @s: finds the length of the string
 */
int _strlen(char *s)
{
	int len;

	while (s[len] != '\0')
	{
		len++;

	}
	return (len);
}
/**
 * num_len - helper function that converts ints to a string
 * Return: length of number
 * @num: looking for numbers
 */
int num_len(int num)
{
	int n,  len = 0;
	n = num;
	while (n)
	{
		len++;
		n /= 10;
	}
	return (len);
}
/**
 * tostring - converts int to a string
 * Return: string
 * @num: numbers that will be converted
 */
char *tostring(int num)
{
	int i, j, x = 0;
	char *s, tmp;

	s = malloc(num_len(num) * sizeof(char));
	if (s == NULL)
		return(NULL);
	if (num == 0)
		s[x] = '0';
	else if (num < 0)
		num = (num * -1);
	while (num != 0)
	{
		s[x] = num % 10 + '0';
		num /= 10;
		x++;
	}
	s[x] = '\0';
	i = _strlen(s) - 1;
	for (j = 0; j <= i /2; j++)
	{
		tmp = s[j];
		s[j] = s[i - j];
		s[i - j] = tmp;
	}
	return (s);
}
/**
 * _strncpy - main function will copy the string
 * Return: index pointer
 * @buffer: first string
 * @src: second string
 * @ip : index pointer
 */
int _strncpy(char *buffer, char *src, int *ip)
{
	int x;

	for (x = 0 ; src[x] != '\0'; x++, (*ip)++)
	{
		*ip = buff_check(buffer, ip);
		buffer[*ip] = src[x];
	}
	return (*ip);
}
