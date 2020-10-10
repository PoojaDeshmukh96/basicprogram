#include <stdio.h>

int main()
{
    int num;
  printf("enter any number");
  scanf("%d",&num);
  palin(num);
  return 0;
}
void palin(int n)
{
    int temp=n;
    int r,sum=0;
    while(temp!=0)
    {
        r=temp%10;
        sum=(sum*10)+r;
        temp=temp/10;

    }
    if(sum==n)
     printf("Number is palindrome");
     else
     printf("Number is not palindrome");
     
}
