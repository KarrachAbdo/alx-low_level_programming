#include <unistd.h>
#include "main.h"
/**
 *print_last_digit - function that print the last digit of a number.
 *@c : number
 * Return: int.
 **/
int print_last_digit(int c)
{
int last_val = c % 10;
if (last_val < 0)
{
last_val = last_val * -1;
}
_putchar(last_val + '0');
return (last_val);
}
