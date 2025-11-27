#include "main.h"
#include <unistd.h>

int print_percent(va_list list)
{
	(void)list; /* Print percent character*/
	return (write(1, "%", 1));
}
