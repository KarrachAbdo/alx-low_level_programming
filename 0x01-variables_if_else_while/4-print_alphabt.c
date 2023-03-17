#include <stdio.h>
/**
 *  * main - A program hat prints the alphabet in
 *   * lowercase, followed by a new line
 *    * Return: Always 0 (Success)
 *     **/
int main(void)
{
int ch = 97;
while (ch <= 122)
{
if (ch != 113 & ch != 101)
{
putchar(ch);
}
ch++;
}
putchar ('\n');
return (0);
}
