#include <stdio.h> 

int main(){
    int binary, decimal = 0, weight = 1, num, rem;
    printf("enter the binnary number\n");
    scanf("%d", &binary);
     num = binary;
    while(binary !=0)
    { 
        rem = binary % 10;
        decimal = decimal + rem*weight;
        binary = binary /10;
        weight = weight*2;

  
    }
    printf("decimal equivalent of the binary number %d is: %d\n", num, decimal);
   return 0;

    
}