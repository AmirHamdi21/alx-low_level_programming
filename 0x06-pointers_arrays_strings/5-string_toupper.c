#include "main.h"

/**
*string_toupper - changes all lowercases letters of a string to uppercase
*@str: parameter
*Return: returns a character
*/
char *string_toupper(char *str)
{
int j, i = 0;
while (str[i] != '\0')
{
for (j = 97; j<123; j++)
{
if (str[i] == j)
str[i] = str[i] - 32;
}
i++;
}
return (str);
}
