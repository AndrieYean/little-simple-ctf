#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    void hackhere();
    char variable[16];
    puts("I know u had knew overflow");
    puts("Hack here >");
    gets(variable);
    puts("I cant get into this house,wheres the door?");
}

void hackhere()
{
    puts("PaPa,its a backdoor");
    system("/bin/sh");
}
