#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * struct checker - structure for format specifier and corresponding function
 * @type: the format specifier as a string
 * @func: pointer to the function that handles this specifier
 */
typedef struct checker
{
	char *type;
	int (*func)(va_list);
} checker;

/* Prototypes for _printf and helper functions */
int _printf(const char *format, ...);
int print_char(va_list args);
int print_string(va_list args);
int print_percent(va_list args);
int print_int(va_list args);

#endif /* MAIN_H */
