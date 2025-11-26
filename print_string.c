#include "main.h"
#include <unistd.h>
/* Print Strings*/
int print_string(va_list list)
{
	char *s = va_arg(list, char *);
	int len = 0;

	if (s == 0)
		s = "(null)";

	while (*s)
	{
		write(1, s++, 1);
		len++;
	}

	return (len);
}
