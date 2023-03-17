#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - A program 1
 * Return: Always 0 (Success)
 **/
int main(void)
{
int n;
int tst;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* my code */
tst = n % 10;
if (tst > 5)
printf("Last digit of %d is %d and is greater than 5\n", n, tst);
if (tst < 0)
printf("Last digit of %d is %d and is than 6 and not 0\n", n, tst);
if (tst == 0)
printf("Last digit of %d is %d and is 0\n", n, tst);

return (0);
}
