#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - the function that prints strings
 * @separator: The string to be printed between the strings
 * @n: the number of stringpassed to the function
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
va_list valist;
unsigned int i;
char *str;
va_start(valist, n);
for (i = 0; i < n; i++)
{
str = va_arg(valist, char *);
if (str)
printf("%s", str);
else
printf("(Nil)");
if (i < n - 1)
if (separator)
printf("%s", separator);
}
printf("\n");
va_end(valist);
}
