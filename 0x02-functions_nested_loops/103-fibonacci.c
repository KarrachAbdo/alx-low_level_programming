#include <stdio.h>
/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
long n1 = 1, n2 = 2, next;
long  sum = 0;
while (n2 <= 4000000)
{
if (n2 % 2 == 0)
sum += n2;
next = n1 + n2;
n1 = n2;
n2 = next;
}
printf("%ld\n", sum);
return (0);
}
