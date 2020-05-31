#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(int argc,char * argv[])
{
    void hidden();
    char variable[16];
    puts("Inspired by one HANHAN");

    if(argc == 2){   
        if (strcmp(argv[1],"backdoor") == 0){
            puts("Amazing!\nCan you find it?");
            hidden();
        }
    }

    printf("%s","Hack here >");
    gets(variable);
    puts("EOF");
}

void hidden()
{
    puts("flag{th1s_15_A_fake_flag}");
    printf("%s","Where is /bin/sh\n");
    system("echo Greeting from system");
}