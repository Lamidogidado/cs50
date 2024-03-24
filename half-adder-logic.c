#include <stdio.h>

int main() 
{
    int a,b,sum,carry;
    printf("Enter the two number");
    scanf("%d %d", &a, &b);
    while(b!=0)
    {
        sum = a^b;
        carry = (a&b) <<1;
        a = sum;
        b = carry;
    }
    printf("the sum of two number is %d", sum);
}