#include <stdio.h>
/**
 *  * main - A program
 *   * Return: Always 0 (Success)
 *    **/
int main(void)
{
int  i;
int  j;
for (i = 0 ; i < 10 ; i++)
putchar(i + 48);
for (j = 0 ; j < 6 ; j++)
putchar(j + 97);
putchar('\n');
return (0);
}
