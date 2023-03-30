#include "main.h"
/**
*cap_string - function that capitalize first character of a word
*@str: string to capitalize
*Return:returns the capitalized string
*/
char *cap_string (char *str) 
{
int index = 0;
while (str[index++] != '\0')
{
if ((str[index] == ' ' || str[index] == ',' || str[index] == ';'
|| str[index] == '.' || str[index] == '!' || str[index] == '?'
|| str[index] == '"' || str[index] == '(' || str[index] == ')'
|| str[index] == '{' || str[index] == '}' || str[index] == '-')
&& str[index + 1] >= 'a' && str[index + 1] <= 'z')	
str[index + 1] -= 32;
else if (((str[index] == '\n') || (str[index] == '\t'))
&& str[index + 2] >= 'a' && str[index + 2] <= 'z')
str[index + 1] -= 32;
}
return (str);
}
