#include<stdio.h>

/* 
Dertemine the value of a collection of coins.
*/

int main()
{

char first, middle,last; /* input - 3 iniatials*/
int dollars;
int quarters;
int dimes;
int nickels;
int pennies;
int change;
int total_dollars;
int toatal_cents;


/*get and display the customers iniatials. */
  
scanf("%c%c%c", &first, &middle, &last);
printf("\n%c%c%c, please enter your coin information.\n", 
first, middle,last);


toatal_cents = 100* dollars + 25 * quarters + 10 * dimes + 5 * nickels + pennies;

/* Get the count of each kind of coin. */
printf("Number of $ coins > ");
scanf("%d", &dollars);
printf("Number of quarters> ");
scanf("%d", &quarters);
printf("Number of dimes> ");
scanf("%d", &dimes);
printf("Number of nickels > ");
scanf("%d", &nickels);
printf("Number of pennies > ");
scanf("%d", &pennies);
/* Compute the total value in cents. */

/* 

find the value in dollars nad change
*/
total_dollars = toatal_cents / 100;
change = toatal_cents % 100;

/* 
Display the creadit slip with value in dollar and change.
*/

printf("\n\n%c%c%c Coin Credit\nDollars: %d\nChange: %d cents\n",
first, middle, last, total_dollars, change);
return (0);
}