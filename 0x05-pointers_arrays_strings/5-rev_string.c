#include "main.h"
#include <string.h>
/**
*rev_string - Reverse a string
*@s: String to reverse
*Return: Nothing
*/

void rev_string(char *s)
{
int len = strlen(s);
len = len - 1;
int i;
int j;
int temp;
int k = len;
for (i = 0; i < k; i++)
{
for (j = 0; j < len; j++)
{
temp = s[j];
s[j] = s[j+1];
s[j+1] = temp;
}
len = len -1;
}
}
