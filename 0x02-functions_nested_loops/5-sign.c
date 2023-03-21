#include <unistd.h>
#include "main.h"
/**
 *print_sign - function that checks for alpha.
 * @c : the caractere to be cheched
 *Return: positive success 1.
 * negative : -1.
 * zero : 0.
 **/
int print_sign(int c)
{
if (c > 0)
{
_putchar(43);
return (1);
}
if (c < 0)
{
_putchar(45);
return (-1);
}
if (c == 0)
{
_putchar(48);
return (0);
}
return (0);
}
