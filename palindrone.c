#include <stdio.h>

int main(){
  int n, result=0, q, rem;
  printf("plese enter the number: ");
  scanf("%d", &n);

  q = n;
  while (q != 0)
  {
    rem = q%10;
    result = result*10 + rem;
    q = q/10;
  }
  if(result == n) printf("it's a palindrone\n");
  else 
  printf("no! it's not a pallindrone\n");
  return 0;
  

}