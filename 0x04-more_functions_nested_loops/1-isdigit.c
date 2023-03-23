#include <unistd.h>
#include "main.h"
/**
*_isdigit - function that checks for digits.
*@c : the caractere to be cheched
*Return: On success 1.
* On otherwise, 0.
**/
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
return (1);
else
return (0);
}
