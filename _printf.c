#include "main.h"
#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...)
{
	va_list list;
	int i = 0, j, len = 0;

	checker printers[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{NULL, NULL}};
	if (format == 0)
		return (-1);

	va_start(list, format);

	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			if (format[i + 1])
			{
				j = 0;
				while (printers[j].type)
				{
					if (format[i + 1] == *(printers[j].type))
					{
						len = len + printers[j].func(list);
						i += 2;
						break;
					}
					j++;
				}
				if (printers[j].type == NULL)
				{
					len = len + write(1, &format[i], 1);
					i++;
				}
			}
			else
				return (-1);
		}
		else
		{
			len = len + write(1, &format[i], 1);
			i++;
		}
	}

	va_end(list);
	return (len);
}
