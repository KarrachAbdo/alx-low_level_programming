#include <stdio.h>
/**
 * main - A program
 *Return: Always 0 (Success)
 **/
int main(void)
{
int  i;
int  j;
int  a;
for (i = 0; i < 8; i++)
{
for (j = i + 1; j <= 8; j++)
{
for (a = j + 1; a <= 9; a++)
{
putchar(i + 48);
putchar(j + 48);
putchar(a + 48);
if (i != 7)
{
putchar(',');
putchar(' ');
}
}
}
}
	putchar('\n');
	return (0);
}
