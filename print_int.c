#include "main.h"

/**
 * print_int - prints an integer
 * @args: va_list containing the integer to print
 *
 * Return: number of characters printed
 */

int print_int(va_list args)

{
int i = va_arg(args, int);
char str[12];
int len = sprintf(str, "%d", i);
write(1, &str, len);

return (len);
}
