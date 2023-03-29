#include "main.h"

/**
*  _strcmp - Function which compare two strings and
*@s1: first string
*@s2:second string
*Return:
*		returns zero if s1 == s2
*		returns negative number if s1 < s2
*		returns positive number if s1 > s2
*/
int _strcmp(char *s1, char *s2)
{
int l1, l2;
l1 = _strlen(s1);
l2 = _strlen(s2);
if (l1 < l2)
return (-15);
else if (l1 > l2)
return (15);
else
return (0);
}

int _strlen(char *s)
{
int len = 0;
while (s[len] != '\0')
len++;
return (len);
}
