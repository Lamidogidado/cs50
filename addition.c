#include <stdio.h>
int main ()
{
    int x, y;
    printf("enter");
    scanf("%d %d", &x, &y);

    while(y !=0)
    {
        x++;
        y--;
    }
    printf("sum of two value is %d\n", x);
    return 0;
}