#include <stdio.h>
#include <ctype.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
int i;
char hexadecimal[]="0123456789abcdef";
for(i=0;i<16;i++)
putchar(hexadecimal[i]);
putchar('\n');
return (0);
}
