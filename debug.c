#include <stdio.h>
#include <cs50.h>


void print_collum(int height);



int main()
{
     int h = get_int("height: ");
     print_collum(h);

} 
void print_collum(int height)
{
    for (int i =0; i<= height; i++)
    {
        printf("#\n");
    }
}