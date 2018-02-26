#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <unistd.h>
#include <stdarg.h>

typedef struct converter
{
	char tp;
	int (*f)(va_list, char *, int *);
} converter_t;

int print_b(va_list list, char *buffer, int *ip);
int print_c(va_list list, char *buffer, int *ip);
int print_d(va_list list, char *buffer, int *ip);
int print_i(va_list list, char *buffer, int *ip);
int print_s(va_list list, char *buffer, int *ip);
int print_u(va_list list, char *buffer, int *ip);
int print_o(va_list list, char *buffer, int *ip);
int print_hex(va_list list, char *buffer, int *ip);
int print_ux(va_list list, char *buffer, int *ip);
int print_percent(va_list list, char *buffer, int *ip);
int _printf2(const char *format, ...);
int (*formatter(char c))(va_list list, char *, int *);
void buff_reset(char *buffer, int *ip);
int buff_check(va_list list, char *buffer, int *ip);
#endif
