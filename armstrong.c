#include <stdio.h>

int main()
{
    int numbers, count =0, result = 0, mul =1, counts, rem;
    printf("Enter:\n" );
    scanf("%d", &numbers);

    int number = numbers;
    while(number !=0)
    {
        number = number/10;
         count++;

    }
    counts = count;
    number = numbers;
    while (number!=0)
    {
        rem = number %10;
        while(counts!=0)
        {
            mul = mul*rem;
            counts--;
        
        }

        result = result + mul;
        counts = count;
        number = number/10;
        mul = 1;
    }
        if(result == numbers)
        printf("%d is an armstrong number\n", numbers);
        else 
        printf("%d is not an armstrong number\n", numbers);
        return 0;
        
    }
    
    
