#include <stdio.h>
#include <stdlib.h>

void vun()
{
char cmd[16] = "echo Bye!";
char buff[16];
gets(&buff);
system(cmd);
}

int main ()
{
vun();
return 0;
}
