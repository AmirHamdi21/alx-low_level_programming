#include "main.h"
/**
*puts_half - puts half of a string
*@str: string
*Return:void
*/
void puts2(char *str)
{
int l = _strlen(str);
if (l % 2 == 0)
l = l / 2;
else
l = (l - 1) / 2
while (*str != '\0')
{
_putchar(str[l]);
str++;
}
}


/**
 *_strlen - returns the length of a string
 * @s: string
 *Return: returns lenght;
 */
int _strlen(char *s)
{
int count, inc;
inc = 0;
for (count = 0; s[count] != '\0'; count++)
inc++;

return (inc);
}
