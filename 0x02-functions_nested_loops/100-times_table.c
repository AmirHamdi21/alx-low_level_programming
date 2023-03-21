#include "main.h"
/**
*print_times_table - prints the  times table with
*parameter
*@n: parameter
*Return: returns nothing
*/
void print_times_table(int n)
{
if (n <= 15 && n >= 0){
int i, j, s;
for (i = 0; i <= n; i++)
{
putchar('0');
for (j = 1; j <= n; j++)
{
putchar(',');
putchar(' ');
s = i * j;
if (s <= 9)
{
putchar(' ');
putchar(' ');
}   
else if (s >= 10 && s <= 99)
{
putchar(' ');
putchar(s / 10 + '0');
}
else
{
putchar(s / 100 + '0');
putchar((s / 10) % 10 + '0');
}
putchar(s % 10 + '0');
}
putchar('\n');
}
return;
}
}
