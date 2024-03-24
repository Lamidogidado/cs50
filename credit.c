#include <stdio.h>
#include <cs50.h>

int doubleDigitValue(int diget)
{

    int doubleDiget = diget * 2;
   
    int sum;
    if
    (doubleDiget >= 10)
    {
       sum = 1 + doubleDiget % 10;
    }
    else 
    {
      sum =  doubleDiget;
    }
    return sum;
}

int main()
{



  
}