#include <stdio.h>
/**
 * main - Entry point
 * Description:user blabalabalabll
 * Return: Always 0 (Success)
 */
int main(void)
{
int i, j, flag = 0, flag1 = 0;
for (j = 0; j < 10; j++)
{
flag + = 1;
for (i = 0; i < 10; i++)
{
if (flag <= i)
{
flag1 + = 1;
putchar(j + '0');
putchar(i + '0');
if (flag1 != 45)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
