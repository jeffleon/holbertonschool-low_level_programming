#include <stdio.h>
/**
 * main - Entry point
 * Description:user blabalabalabll
 * Return: Always 0 (Success)
 */
int main(void)
{
int x, i, j, flag = 0, flag2 = 0, count;
for (x = 0; x < 10; x++)
{
flag += 1;
flag2 = 0;
for (i = 0; i < 10; i++)
{
flag2 += 1;
for (j = 0; j < 10; j++)
{
if (i >= flag && j >= flag2)
{
count += 1;
putchar(x + '0');
putchar(i + '0');
putchar(j + '0');
if (count != 120)
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
