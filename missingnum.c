#include<stdio.h>
int main()
{
    int i,n;
    //printf("Enter number of array in  array");
    //scanf("%d",&n);
    int arr[]={1,2,3,4,6};
    int size=sizeof(arr)/sizeof(arr[0]);
   int x= missing(arr,size+1);
   printf("Missing number is %d ",x);
}
int  missing(int arr[],int s)
{
    int n,sum=0;
    int miss=(s*(s+1)/2);
 //      printf("%d",miss);
    for(int i=0;i<s;i++)
    {
       sum=sum+arr[i];
    }
  //    printf("%d",sum);
    return (miss-sum);
}

