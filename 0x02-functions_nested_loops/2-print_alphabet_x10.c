#include <stdio.h>

/**
 * main - Entry point
 *
 * Description:  the program prints _putchar
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)/*Description : print_alphabet_x10*/
{
int c = 'a';
int i = 0;
for (i = 0; i < 10; i++)
{
for (c = 'a'; c <= 'z'; c++)
putchar(c);
putchar('\n');
}

return;
}
