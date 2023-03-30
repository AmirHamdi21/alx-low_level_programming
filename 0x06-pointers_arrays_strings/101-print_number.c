#include "main.h"

/**
 * base10 - power in 10 base
 * @n: an exponent
 * Return: returns 10 to power exponent
 */
void print_number(int n)
{
if (n > 0)
num(n);
else if (n < 0)
{
n = n * -1;
putchar('-');
num(n);
}
else
putchar(48);
}



void num(int s)
{
if (s >= 10 && s < 100)
putchar(s / 10 + '0');
else if (s >= 100 && s < 1000)
{
putchar(s / 100 + '0');
putchar((s / 10) % 10 + '0');
}
else if (s >= 1000 && s < 10000)
{
putchar(s / 1000 + '0');
putchar((s / 100) % 10 + '0');
putchar((s / 10) % 10 + '0');
}
putchar(s % 10 + '0');
}
