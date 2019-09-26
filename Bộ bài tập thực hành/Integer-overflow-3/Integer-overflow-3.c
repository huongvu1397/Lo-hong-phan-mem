#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void vun()
{
char buff[16];
int your_money = 5000;
printf("FLAG's PRIZE: 6969$\n");
printf("Your money: %d$\n", your_money);

printf("YOU BET ... \n");
read(0, buff, 15);
if (strstr(buff, "-") != NULL)  //this alway bigger than 0 haha
{
printf("BYE BYE HACKER ...\n");
exit(0);
}
int your_bet = strtoul(buff, NULL, 0);

if (your_bet > your_money)
{
printf("YOU THINK I AM STUPID???\n");
exit(0);
}

printf("Guess my number ...\n");
read(0, buff, 15);

printf("It isn't my number! You lose!\n");
your_money -= your_bet;

printf("You money: %d$\n", your_money);
if (your_money == 6969)
system("cat flag");
else
printf("Good bye loser\n");
}

int main ()
{
vun();
return 0;
}
