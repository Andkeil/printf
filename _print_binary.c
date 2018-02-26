#include"holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strlen - main function
 * Return: it will return
 * @s: finds the length of the string
 */
void printf_binary(va_list int biny)
{
	int bnums = [1000];
	va_list list;
	int store;

	va_start (list , biny);
	store = 0;
	while (biny > 0) /*counter*/
	{
		bnums[store] = biny % 2; /*store the remainder in store array*/
		biny = biny / 2;
		store++;
	}
	va_end(list); /*clear variadic list*/
}
