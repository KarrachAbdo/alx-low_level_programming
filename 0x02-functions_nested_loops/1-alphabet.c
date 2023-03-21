#include <unistd.h>
#include "main.h"
/**
 * void print_alphabet(void) - function that prints the alphabet,
 * in lowercase
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
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
