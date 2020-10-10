#include<stdio.h>
void scndlarg(int a[],int s)
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
       printf("%d", a[s-2]);  
     //  printf("%d", a[1]);  
}  

    int main() 
{ 
    int arr[] = {100,82,44,282,222}; 
       int size = sizeof(arr)/sizeof(int); 
    scndlarg(arr,size ); 
    return 0; 
} 
 
    