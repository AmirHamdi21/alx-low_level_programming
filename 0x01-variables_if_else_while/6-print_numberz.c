#include <stdio.h>

/**
 * main - Entry point
 *
 * Description:  the program prints the numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
for (i = 0; i < 10; i++)
putchar(i + '0');
putchar('\n');

return 0;
}
