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
	if (num == 0)
		return (0);
	else
		return (num % 2 + 10 * binary_convert(num / 2));
}
/**
 *binary_string- converts the binary into a string
 * @num: number that is passes in
 * Return: returns a string
 */

char *binary_string(int num)
{
	long int b;
	char *s;

	b = binary_convert(num);
	s = tostring(b);
	return (s);
}
