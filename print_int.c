#include "main.h"
#include <unistd.h>
/* Print Integers*/

int print_int(va_list args)
{
	int n = va_arg(args, int);
	return (write(1, &n, 1));
}
