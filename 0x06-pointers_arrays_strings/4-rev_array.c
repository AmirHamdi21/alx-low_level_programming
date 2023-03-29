#include "main.h"

/**
*  reverse_array - function that reverse content of array
*  @a: array
*  @n: number of elements
*/
void reverse_array(int *a, int n)
{
int l, i, j, swap;
n = n - 1;
l = n;
for (i = 0; i < n; i++)
{
for (j = 0; j < l; j++)
{
swap = a[j];
a[j] = a[j + 1];
a[j + 1] = swap;
}
l = l - 1;
}
}
