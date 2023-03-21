#include <stdio.h>
/**
 * main - check the code.
 * Return: Always 0.
 **/
void fibo(void)
{
long a = 1, b = 2, c, i;
printf("%ld, %ld, ", a, b);
for (i = 2; i < 98; i++)
{
c = a + b;
printf("%ld, ", c);
a = b;
b = c;
}
printf("\n");
}
int main(void)
{
fibo();
return (0);
}
