#include <unistd.h>
#include "main.h"
/**
 *print_sign - function that print abs value.
 * @c : the value to be compute
 *Return: int
 **/
int _abs(int c)
{
int val_abs;
if (c < 0)
{
val_abs = -1 * c;
return (val_abs);
}
else
return (c);
}
