#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void vun()
{
long long int temp;
char buff[32];
printf("Give me more than 99999$ and i will give you my flag\n");
printf("Input your money ...\n");
read(0, buff, 30);
temp = strtoull(buff, NULL, 10);
if (temp > 99999)
{
printf("WHERE DO YOU GET THAT MONEY? I CANT TAKE THAT!\n");
exit(0);
}

int money_given = temp;
if (money_given > 99999)
system("cat flag");
else
printf("ONLY %d$ ??? YOU CANT GET MY FLAG! BYEEEEEEEEEE!\n", temp);
}

int main ()
{
vun();
return 0;
}
