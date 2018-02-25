#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <unistd.h>
#include <stdarg.h>

typedef struct converter
{
	char tp;
	int (*f)(va_list, char *, int *);
} converter_t;

int _printf2(const char *format, ...);
int (*formatter(char c))(va_list list, char *, int *);
int print_d(va_list list, char *buffer, int *ip);
void buff_reset(char *buffer, int *ip);
int buff_check(va_list list, char *buffer, int *ip);
#endif
