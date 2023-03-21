#include <stdio.h>
/**
 * main - check the code.
 * Return: Always 0.
 **/
int main(void)
{
int i;
unsigned long long int n1 = 1, n2 = 2;
printf("%llu, %llu", n1, n2);
for (i = 3; i <= 50; i++)
{
unsigned long long int next = n1 + n2;
printf(", %llu", next);
n1 = n2;
n2 = next;
}
printf("\n");
return (0);
}
