#include "holberton.h"

int (*formatter(char c))(va_list, char *, int *)
{
	int i = 0;
	converter_t form[] = {
	       	{'d', print_d},
	       	{'b', print_binary},
		{'c', print_c},
	       	{'i', print_d},
		{'s', print_s},
		/*	{'u', print_u},
		{'o', print_o},
		{'x', print_hex},
	       	{'X', print_ux},
		*/{'%', print_percent},
		{'r', print_rev},
		{'R', print_rot},
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
