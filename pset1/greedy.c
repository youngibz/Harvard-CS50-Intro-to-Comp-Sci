/*

Program that asks user for change owed and then returns the minimum number of coins
used to make change */


#include <stdio.h>
#include <cs50.h>
#include <math.h>

//Define quarter, dime, nickel, penny amounts

#define QUARTERS 25
#define DIMES 10
#define NICKELS 5
#define PENNIES 1

int main(void) 

{
    //variable declaration
    
    int coins_used = 0;
    int cents = 0;
    float change = 0;
    
// While loop 
    do 
    {
        printf("How much change do I owe you? ");
        change = get_float();
        
    } while(change <= 0);
    
    //convert amount given to cents
    cents = round(change*100);
    
    /* Determine which coins can be used, then subtract amount from 
    total cents. Increase coin count.
    
    */
    
    while (cents >= QUARTERS) 
    {
        cents -=25;
        coins_used++;
      
    }
    
    while (cents >= DIMES) 
    {
        
        cents -=DIMES;
        coins_used++;
        
    }

    while (cents >= NICKELS)
    {
        cents -=NICKELS;
        coins_used++;
        
    }
    while (cents >= PENNIES)
    {
        cents -=PENNIES;
        coins_used++;
        
    }
    
    
    // Print number of coins used
    printf("Number of coins: %i\n", coins_used);
    
    
    
}
