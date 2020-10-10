#include<stdio.h>
void scndlarg(int a[],int s,int k)
{
    int temp=0;
   for (int i = 0; i < s; i++)   
        {  
            for (int j = i + 1; j < s; j++)   
            {  
                if (a[i] > a[j])   
                {  
                    temp = a[i];  
                    a[i] = a[j];  
                    a[j] = temp;  
                }  
            }  
        }  
       printf("%d", a[k]);  
     //  printf("%d", a[1]);  
}  

    int main() 
{ 
    int k;
    int arr[] = {100,82,44,282,222}; 
     printf("enther the kth value\n");
    scanf("%d",&k);
       int size = sizeof(arr)/sizeof(int); 
    scndlarg(arr,size,k); 
    return 0; 
} 