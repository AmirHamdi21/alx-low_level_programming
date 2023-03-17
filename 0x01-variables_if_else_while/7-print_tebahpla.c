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
char c = 'z';
while (c >= 'a')
{
putchar(c);
c--;
}
putchar('\n');

return (0);
}
