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
for (j = 0; j <= 9; j++)
{
s = i * j;
printf("%d", s);
if (j != 9)
_putchar(',');
_putchar('  ');
}
if (i != 9)
_putchar('\n');
}
return;
}
