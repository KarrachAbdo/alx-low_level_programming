#include <unistd.h>
#include "main.h"
/**
 *_islower - function that checks for lowercase.
 * Return: On success 1.
 * On otherwise, 0.
 **/
int _islower(int c)
{
if (c >= 97 && c <= 122)
return (1);

return (0);
}
