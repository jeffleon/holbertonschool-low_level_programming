#include <stdio.h>
#include <ctype.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
int i, j, bandera;
for (j = 0; j < 10; j++)
{
for (i = 0; i < 10; i++)
{
bandera++;
putchar(j + '0');
putchar(i + '0');
if (bandera != 100)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}

