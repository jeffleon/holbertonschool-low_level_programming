#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry point
 * Description:user blabalabalabll
 * Return: Always 0 (Success)
 */
int main(void)
{
int i, j;
for (j = 0; j < 10; j++)
{
putchar(j + '0');
for (i = 0; i < 10; i++)
if (i == j)
{
if (j != 9)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
