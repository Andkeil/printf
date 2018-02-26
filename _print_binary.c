#include"holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include "helper.c"
/**
 * _strlen - main function
 * Return: it will return
 * @s: finds the length of the string
 */
int printf_binary(va_list list, char *buffer, int *p, int biny)
{
	int bnums = [1000];
	int store;

	va_start (list , biny);
	store = 0;
	while (biny > 0) /*counter*/
	{
		bnums[store] = biny % 2; /*store the remainder in store array*/
		biny = biny / 2;
		store++;
		return (biny);
	}
	binary_string(biny);
	va_end(list); /*clear variadic list*/
}
int binary_string(int num)
{
	char *strptr;

	strptr = tostring(num);
	return (strptr);

}
 
