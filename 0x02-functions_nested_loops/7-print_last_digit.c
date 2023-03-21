#include "main.h"
/**
*print_last_digit - function that print last digit of a number
*@n: number to be targeted
*Return: returns 0
*/
int print_last_digit(int n)
{
if ((n > 10 && n < 100) || (n < -10 && n > -100))
{
if (n < 0)
n = n * -1;
return (n % 10);
}
if ((n > 100 && n < 1000) || (n < -100 && n > -1000))
{
if (n < 0)
n = n * -1;
return (n % 10);
}
if ((n > 1000 && n < 10000) || (n < -1000 && n > -10000))
{
if (n < 0)
n = n * -1;
return (n % 10);
}
}
