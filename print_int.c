#include "main.h"
#include <unistd.h>
/* Print Integers*/

int print_int(va_list args)
{
	int n = va_arg(args, int);
	return (print_number(n));
}