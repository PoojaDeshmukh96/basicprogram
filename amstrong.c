#include <stdio.h>

int main()
{
    int num;
  printf("enter any number");
  scanf("%d",&num);
  int cnt=count(num);
  arms(cnt,num);
  return 0;

}

int count(int n)
{
   int temp=n;
   int r,count=0;
    while(temp!=0)
  {
    r=temp%10;
    temp=temp/10;
    count++;
   }
    return count;
}
void arms(int cnt ,int n)
{
   int temp=n;
   int r,sum=0;

  while(temp!=0)
{
    r=temp%10;
    sum=pow(r,cnt);
    temp=temp/10;
  }
  if(sum==n)
  printf("Amstrong number");
  else
  printf("Not Amstrong number");
}