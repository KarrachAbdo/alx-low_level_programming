#include <unistd.h>
#include "main.h"
/**
 * void print_alphabet(void) - function that prints the alphabet,
 * in lowercase
 * Return: On success void
 */
void print_alphabet(void)
{
char i;
for (i = 'a'; i <= 'z'; i++)
{
_putchar(i);
}
_putchar('\n');
}
