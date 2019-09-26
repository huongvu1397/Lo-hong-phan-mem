#include <stdio.h>
#include <stdlib.h>

char cmd[32] = "echo bye bye";

int bye()
{
system(cmd);
exit(0);
}

void vun()
{
char buff[1024];
read(0, buff, 1000);
printf(buff);
bye(0);
}

int main ()
{
vun();
return 0;
}

