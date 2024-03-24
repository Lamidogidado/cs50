#include <stdio.h>

int rectangle(int, int);
int main()
{
    int m = 20, n = 30, sum;
    sum = rectangle(m, n);
}

int rectangle(int l , int b)
{
 return (l*b);
}