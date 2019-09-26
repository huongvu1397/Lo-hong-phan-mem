#include <stdio.h>
#include <stdlib.h>

void vun()
{
unsigned int temp;
char buff[4];
printf("Give me more than 99999$ and i will give you my flag\n");
printf("Input your money ...\n");
read(0, buff, 3);
temp = atoi(buff);
if (temp > 99999)
system("cat flag");
else
printf("ONLY %d$ ??? YOU CANT GET MY FLAG! BYEEEEEEEEEE!\n", temp);
}

int main ()
{
vun();
return 0;
}

