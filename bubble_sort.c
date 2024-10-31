// Bubble Sort Algorithm

#include<stdio.h>
#include<stdbool.h>

int main()
{
    int arr[]={9,8,7,6,5};
    
    int n=sizeof(arr)/sizeof(arr[0]);
    
    printf("Size is :%d\n",n);
    
    for(int i=0;i<n-1;i++)
    
     {  
	   bool flag=true;// Assume the array is sorted
         for(int j=0;j<n-1-i;j++)
         {
             if(arr[j]>arr[j+1])
              {
                  int temp=arr[j];
                  arr[j]=arr[j+1];
                  arr[j+1]=temp;
                  flag=false;
              }
         }
         if(flag==true)// If no swaps occurred, the array is sorted
           break;
     }
    
    printf("print array\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    
    return 0;
}
