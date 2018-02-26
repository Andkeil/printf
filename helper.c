#include "holberton.h"
/**
 * _strlen - main function
 * Return: it will return
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
 * Return: a stirng pointer
 * @num: looking for numbers
 */
int num_len(int num)
{
	int n, len = 0;
	num = 0;

	while (n != o)
	{
		len++;
		n / = 10;
	}
	return (len);
}
/**
 * tostring - converts int to a string
 * Return: it will return nothing
 * @str : string that it will be converted to
 * @numbers: numbers that will be converted
 */
void tostring(char str[], int numbers)
{
	int i, j, len = 0, n;
	n = 0;

	n = numbers;
	while (n != 0)
	{
		len++;
		n / = 10;
	}

	for ( i = 0; i < len; i++)
	{
		j = numbers % 10;
		numbers = numbers / 10;
		str[len - (i + 1)] = numbers + '0';
	}
	str[len] = '\0';
}
/**
 * _strncpy - main function will copy the string
 * Return: it will return
 * @dest: first string
 * @src: second string
 * @n : int
 */
char *_strncpy(char *dest, char *src, int n)
{
	int x;

	for (x = 0 ; x < n && src[x] != '\0' ; x++)
	{
		dest[x] = src[x];
	}
	for (; x < n ; x++)
	{
		dest[x] = '\0';
	}
	return (dest);
}
