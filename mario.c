#include<stdio.h>
#include<cs50.h>

int main()
{ 
int number,i,j,k,s;
number = get_int("HEight: ");

  for(i = 0; i<= number; i++) 
   {
    for (s = i; s<number; s++)
    {
      printf(" ");
    }
    for(j=0;j<=i;j++)
    {
        printf("#");
    }
    printf("  ");

   for (k = 0; k <= i; k++)
   {
      printf("#");
      }  
      printf("\n");
  }

  
}

