#include <stdio.h>
/**
 * main - check the code.
 * Return: Always 0.
 **/
int main(void)
{
unsigned long a = 1, b = 2, c;
int i;
printf("%ld, %ld, ", a, b);
for (i = 2; i < 98; i++)
{
c = a + b;
printf("%ld, ", c);
a = b;
b = c;
}
printf("\n");
return (0);
}
