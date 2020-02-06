#include <stdio.h>
#include <ctype.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
int i,c;
for(i=0;i<10;i++)
{
c=i+'0';
putchar(c);
}
putchar('\n');
return (0);
}
