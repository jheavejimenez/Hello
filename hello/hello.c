#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //this is use to get the name of the user
    string yourName = get_string("What is your name?\n");
    // to this play the text 
    printf("hello, %s\n", yourName);
}