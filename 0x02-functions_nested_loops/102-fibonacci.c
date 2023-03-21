#include <stdio.h>
/**
 * main - check the code.
 * Return: Always 0.
 **/
int main(void)
{
int i;
long next = 0;
long  n1 = 1, n2 = 2;
printf("%ld, %ld", n1, n2);
for (i = 3; i <= 50; i++)
{
next = n1 + n2;
printf(", %ld", next);
n1 = n2;
n2 = next;
}
printf("\n");
return (0);
}
