#include <stdio.h>

/**
 * main - Entry point
 *
 * Description:  the program prints the lowercase alph
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char c = 'a';
char a = 'A';
while (c <= 'z')
{
putchar(c);
c++;
}
while (a <= 'Z')
{
putchar(a);
a++;
}
putchar('\n');

return (0);
}
