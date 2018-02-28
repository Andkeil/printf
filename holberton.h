#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 *struct converter- main function
 * @tp: type of conversion
 * @f: function pointer
 * Description: s
 */
typedef struct converter
{
	char tp;
	int (*f)(va_list, char *, int *);
} converter_t;

int print_b(va_list list, char *buffer, int *ip);
int print_c(va_list list, char *buffer, int *ip);
int print_d(va_list list, char *buffer, int *ip);
int print_s(va_list list, char *buffer, int *ip);
int print_percent(va_list list, char *buffer, int *ip);
int print_rev(va_list list, char *buffer, int *ip);
int print_rot(va_list list, char *buffer, int *ip);
int _printf(const char *format, ...);
int (*formatter(char c))(va_list list, char *, int *);
void buff_reset(char *buffer, int *ip);
int buff_check(char *buffer, int *ip);
int _strncpy(char *buffer, char *src, int *ip);
int _strlen(char *s);
int num_len(int num);
char *binary_string(int num);
char *tostring(int n);
int print_binary(va_list list, char *buffer, int *ip);
long binary_convert(unsigned int n);
#endif
