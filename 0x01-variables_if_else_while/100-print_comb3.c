#include <stdio.h>
/**
* main - A program
* Return: Always 0 (Success)
**/
int main(void)
{
int  i;
int  j;
for (i = 0; i < 9; i++)
{
for (j = i + 1; j <= 9; j++)
{
putchar(i + 48);
putchar(j + 48);
if (i != 8)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
