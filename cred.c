 #include <stdio.h>
 #include <cs50.h>

 int main(){
  long reminder =0,rem1 = 0 , rem2 = 0, result ,number, doubleDigit;
  long sum = 0;
  number = get_long("enter\n" );

  while (number!=0)
  {
    reminder = reminder+ number%10;
    number = number/10;
    doubleDigit = (number%10)*2;

    if (doubleDigit >=10)
    {
      rem1 = 1+ doubleDigit%10 ;
    } else {
      rem2 = doubleDigit;
    }
    result = reminder + rem1 + rem2;
}
    
 printf("%ld\n", sum);
  }