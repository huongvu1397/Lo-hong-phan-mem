#include <stdio.h>
#include <stdlib.h>

int Bye()
{
system("echo Byte byte =]]");
exit(0);
}

int cat_flag()
{
system("cat flag");
exit(0);
}

void vun()
{
int (*callme_maybe)() = (int(*)())Bye;
char buff[16];
read(0, buff, 17);
callme_maybe();
}

int main ()
{
vun();
return 0;
}
