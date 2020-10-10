#include <stdio.h>

int main()
{
    int n;
  printf("enter any number");
  scanf("%d",&n);
  factorial(n);
  return 0;
}
void factorial(int n)
{
    int i,fact=1;
  for(i=n;i>=1;i--)
  {
     fact=fact*i;
  }
  printf("%d",fact);
}