#include <stdio.h>
/**
 *  * main - A program hat prints the alphabet in
 *   * lowercase, followed by a new line
 *    * Return: Always 0 (Success)
 *     **/
int main(void)
{
int ch = 97;
int ch1 = 65;
while (ch <= 122)
{putchar(ch);
ch++;
}
while (ch1 <= 90)
{putchar(ch1);
	ch1++;
}
putchar ('\n');
return (0);
}
