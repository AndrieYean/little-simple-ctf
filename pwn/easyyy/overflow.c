#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    char name[16];
    int show_me_the_flag_plz = 0;
    puts("Have u ever heard overflow?");
    puts("Have u ever heard the gets functions weakness?");
    puts("Whats your name? >  ");
    gets(name);
    if (show_me_the_flag_plz)
    {
        puts("O that is");
        system("/bin/sh");  // Your aim 
    }   
    puts("No,u have n0t");
    getchar();
    puts("Try!");
    getchar();
    puts("Again!");

}
