#include <cs50.h>
#include <stdio.h>

int get_size(void);
void print_grid(int n);

int main(void)
{
    int n = get_size();
    void print_gride(int n);
}
   int get_size(void)
   {
    int n;
    do
    {
        n = get_int("size: ");

    } 
    while (n<1);
    return n;
   }
   void print_grid(int n)
   {
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}