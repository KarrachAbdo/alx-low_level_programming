#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - sum of all of them
 * @n: parameter
 * Return: On success sum.
 * Otherwise - if n == 0 - 0.
 **/
int sum_them_all(const unsigned int n, ...)
{
va_list ap;
unsigned int i, sum = 0;
va_start(ap, n);
for (i = 0; i < n; i++)
sum = sum + va_arg(ap, int);
va_end(ap);
return (sum);
}
