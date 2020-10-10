#include <stdio.h>

int main()
{
    int n,m,i;
  printf("enter any number");
  scanf("%d%d",&n,&m);
  for( i=n;i<=m;i++)
  {
  if(i%2==0)
      printf("X");

     if(i% 5==0)
        printf("Y"); 
  }
  // printf("\n%d",i);
    
}