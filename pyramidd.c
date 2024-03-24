#include <stdio.h> 
#include <cs50.h>
int main(void)
{
  int levels;
  do
  {
    levels = get_int("Stair level: ");
  }
  while (levels > 8 || levels < 1);
  for (int i = 0; i < levels; i++)
  {
    int spaces = levels - (i + 1);
    for (int j = 0; j < spaces; j ++)
    {
      printf(" ");
    }
    int stairs = i + 1;
    
    for (int x = 0; x < stairs; x++)
    {
      printf("#");
    }
    printf("  ");
    // Final inner loop to handle printing the left-aligned pyramid
    for (int a = 0; a < stairs; a++)
    {
      printf("#");
    }
    printf("\n");
  }
}
