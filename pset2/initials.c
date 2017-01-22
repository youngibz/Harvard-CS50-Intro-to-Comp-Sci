#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>


// program that prompts user for their name and then returns initials

int main(void)
{
    //Ask for user input and store it in a variable 'name'
    printf("What is your name:\n");
    string name = GetString();
    
    //print the first initial in uppercase
    printf("%c", toupper(name[0]));
    
    //loop through rest of letters
    for (int i = 0; i < strlen(name); i++)
    {
        if (name[i] == ' ')
        {
            // print next character as an uppercase char
            printf("%c", toupper(name[i + 1]));
        }
    }
    
    //print new line
    printf("\n");
}
