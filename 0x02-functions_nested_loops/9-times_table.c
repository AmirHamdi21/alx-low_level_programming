#include "main.h"
/**
*times_table - prints the 9 times table
*
*Return: returns nothing
*/
void times_table(void)
{
int i,j,s;
for (i = 0; i <= 9; i++)
{
_putchar('0');
for (j = 1; j <= 9; j++)
{
_putchar(',');
_putchar(' ');
s = i * j;
if (s <= 9)
_putchar(' ');
else
{
_putchar(s / 10 + '0');
}
_putchar(s % 10 + '0');
}
if (i != 9)
_putchar('\n');
}
return;
}
