#include <stdio.h>
#include <stdlib.h>

void cat_flag()
{
system("cat flag");
}

void vun()
{
int i = 0xc00c1e;
char buff[16];
gets(&buff);
printf("%s", buff);
if (i != 0xc00c1e)
{
printf("DONT SMASH THE STACK PLZ!\n");
exit(0);
}
}

int main ()
{
vun();
return 0;
}
