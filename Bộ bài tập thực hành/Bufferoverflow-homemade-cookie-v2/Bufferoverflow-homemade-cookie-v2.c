#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int cookie;

void cat_flag()
{
system("cat flag");
}

void vun()
{
int i = cookie;
char buff[16];
gets(&buff);
printf("%s", buff);
if (i != cookie)
{
printf("DONT SMASH THE STACK PLZ!\n");
exit(0);
}
}

int main ()
{
struct timespec t;
clock_gettime(CLOCK_MONOTONIC_RAW, &t);
srand(t.tv_nsec);
cookie = rand() % 0xff;
printf("%x\n", cookie);
vun();
return 0;
}
