#include "holberton.h"

int (*formatter(char c))(va_list, char *, int *)
{
	int i = 0;
	converter_t form[] = {
		{'d', print_d},
		{'\0', NULL}
	};

	while (form[i].tp != '\0')
	{
		if (form[i].tp == c)
			return (form[i].f);
		i++;
	}
	return (0);
}
