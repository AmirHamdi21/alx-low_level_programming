#include "main.h"

/**
 * puts2 - prints part of a string
 * @str: string to be printed
 *
 * Return: void
 **/

void puts2(char *str)
{
while (*str != '\0')
{
putchar(*str);
str++;
str++;
}
putchar('\n');
}
