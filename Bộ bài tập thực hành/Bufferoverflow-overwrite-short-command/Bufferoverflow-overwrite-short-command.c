#include <stdio.h>
#include <stdlib.h>

void vun()
{
char cmd[16] = "echo Bye!";
char buff[16];
read(0, buff, 20);
system(cmd);
}

int main ()
{
vun();
return 0;
}
