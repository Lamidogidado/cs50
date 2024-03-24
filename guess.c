#include<stdio.h>
#include<cs50.h>


int main(void)
{
    int number = 5;
    int guess = get_int("what's your guess? ");

    if (guess != number)
    {
        printf("wrong guess\n");
    }else

    printf("you'r correct\n");
}