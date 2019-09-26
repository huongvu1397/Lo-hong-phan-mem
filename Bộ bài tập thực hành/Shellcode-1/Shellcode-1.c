#include<stdio.h>
#include<string.h>

unsigned char code[50];

void BAD_BYTE()
{
printf("BAD BYE =))\n");
exit(0);
}

main()
{
printf("MAX-SIZE of shellcode is 50\nInput hex-encode shellcode\nEx: aabbccddeeff\n");
printf("BAD BYTE: 0B\n");
char input[100] = {0};
read(0, input, 100);

for(int count = 0; count < strlen(input)-1; count += 2) {
sscanf(&input[count], "%2hhx", &code[count/2]);
char c = code[count/2];
if (c == 0)
{
printf("REALLY? SHELLCODE HAVE NULL BYTE?\n");
exit(0);
}
}


if (strstr(code, "\x0b") != NULL)
{
BAD_BYTE();
}

int (*ret)() = (int(*)())code;
ret();
}

