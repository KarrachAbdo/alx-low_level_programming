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
if (i == 0)
{
putchar('0' + i);
putchar('0' + j);
if (i != 8)
{
putchar(',');
putchar(' ');
}}
else
{
putchar('0' + i);
putchar('0' + j);
if (i != 8)
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
