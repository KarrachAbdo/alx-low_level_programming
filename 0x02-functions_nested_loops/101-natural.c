#include "main.h"
#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
int sum = 0;
int i;
for (i = 0; i <= 1024; i++)
{
if ((i % 3) == 0)
sum = sum + i;
if ((i % 5) == 0)
sum = sum + i;
}
printf("%d", sum);
printf("\n");
return (0);
}
