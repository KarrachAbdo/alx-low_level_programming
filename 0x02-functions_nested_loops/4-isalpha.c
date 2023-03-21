#include <unistd.h>
#include "main.h"
/**
 *_isalpha - function that checks for alpha.
 *@c : the caractere to be cheched
 * Return: On success 1.
 * On otherwise, 0.
 **/
int _isalpha(int c)
{
if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
return (1);

return (0);
}
