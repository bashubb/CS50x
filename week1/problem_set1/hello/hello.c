#include <stdio.h>
#include <cs50.h>


int main(void)
{
    //Taking name from the user
    string name =  get_string("What's your name? ");
    // Print Hello + name taken from the user in the terminal
    printf("hello, %s\n", name);
}