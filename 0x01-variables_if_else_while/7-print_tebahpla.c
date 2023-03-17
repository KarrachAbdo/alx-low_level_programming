#include <stdio.h>
/**
 *  * main - A program hat prints the alphabet in
 *   * lowercase, followed by a new line
 *    * Return: Always 0 (Success)
 *     **/
int main(void)
{
int ch = 122;
while (ch >= 97)
{putchar(ch);
ch--;
}
putchar ('\n');
return (0);
}
