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
