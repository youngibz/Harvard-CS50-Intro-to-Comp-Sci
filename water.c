#include <stdio.h>
#include <cs50.h>

/* 

program that takes user input (number of minutes shower)
and returns number of bottles, using a declared function 

***good practice for prototyping

*/



int bottles (int x); 

int main(void) 

{
    printf("How long do you shower for: ");
    int x = get_int();
    bottles(x);
    printf("%i minutes is equal to %i bottles of water\n", x, bottles(x));
    
    
}


int bottles (int x) 
{
    
    return x * 12; 
    
   
    
}
