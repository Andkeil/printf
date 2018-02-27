#include"holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strlen - main function
 * Return: it will return
 * @s: finds the length of the string
 */
long binary_convert(unsigned int num)
{
	int remain;
	long x = 1, binary = 0;

	while (num != 0)
	{
		remain = num % 2;
		num /= 2;
		binary = binary + (remain * x);
		x = x * 10;
	}
	return (binary);
}
char *binary_string(int num)
{
	int b;
	char *s;

	b = binary_convert(num);
	s = tostring(b);
	return (s);
}
