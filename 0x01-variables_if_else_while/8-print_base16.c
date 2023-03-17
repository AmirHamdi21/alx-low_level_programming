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
int i;
char c = 'a';
for (i = 0; i < 10; i++)
putchar(i + '0');
while (c <= 'f')
{
putchar(c);
c++;
}
putchar('\n');

return (0);
}
