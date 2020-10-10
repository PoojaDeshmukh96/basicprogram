#include<stdio.h> 
  
void sort012(int a[], int n) 
{ 
    int i; 
    int cnt0= 0,cnt1=0,cnt2=0; 
    int mid = 0; 
  
    for(i=0;i<n;i++) 
    { 
        switch (a[i]) 
        { 
        case 0: 
            cnt0++;
            break; 
        case 1: 
            cnt1++; 
            break; 
        case 2: 
            cnt2++; 
            break; 
        } 
    } 
    i=0;
    while(cnt0>0)
    {
        a[i++]=0;
        cnt0--;
    }
      while(cnt1>0)
    {
        a[i++]=1;
        cnt1--;
    }
      while(cnt2>0)
    {
        a[i++]=2;
        cnt2--;
    }
     
    printf("array after segregation "); 
    printArray(a, n); 

} 
  

/* Utility function to print array arr[] */
void printArray(int arr[], int arr_size) 
{ 
    int i; 
    for (i = 0; i < arr_size; i++) 
      
    {
       printf("%d ",arr[i]);
    }
    
} 
  
/* driver program to test */
int main() 
{ 
    int arr[] = {0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1}; 
    int arr_size = sizeof(arr)/sizeof(int); 
    
  
    sort012(arr, arr_size); 
 
  
    //getchar(); 
    return 0; 
} 