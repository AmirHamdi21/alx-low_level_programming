#include "main.h"

/**
* _abs - prints the absolute value of a number
*@n: number targeted
*Return: returns 0
*/
int _abs(int n)
{
if (n > 0)
return (n);
else if (n < 0)
return (n * -1);
else
return (0);
}
