#include <unistd.h>
#include "main.h"
/**
 *_isupper - function that checks for upercase.
 *@c : the caractere to be cheched
 * Return: On success 1.
 * On otherwise, 0.
 **/
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}
