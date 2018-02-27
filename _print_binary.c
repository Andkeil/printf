#include"holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * binary_convert - main function
 * Return: converts an int into a binary number
 * @num: the number being passed in
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
/**
 *binary_string- converts the binary into a string
 * @num: number that is passes in
 * Return: will return a string
 */

char *binary_string(int num)
{
	int b;
	char *s;

	b = binary_convert(num);
	s = tostring(b);
	return (s);
}
