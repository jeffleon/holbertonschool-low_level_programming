#include <stdio.h>
#include <ctype.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
int i;
char alfabeto[]="abcdefghijklmnopqrstuvwxyz";
for(i=25;i>=0;i--)
putchar(alfabeto[i]);
putchar('\n');
return (0);
}
