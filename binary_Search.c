#include<stdio.h>

int binarySearch(int arr[],int size,int element);

int main()
{
    int arr[]={1,2,3,44,55,66,77,88,99};
    int size=sizeof(arr)/sizeof(arr[0]);
    printf("size of Array is  :%d\n",size);
    
   for(int i=0;i<size;i++)
       {
	     printf("%d\t",arr[i]);
	   }
	   printf("\n");

    int element;
    printf("Enter a element : ");
    scanf("%d",&element);
    
    int indexing=binarySearch(arr,size,element);

	if(indexing==-1)
	  {
	   printf("Element is not found\n");
	  }
	 else
	  {
       printf("The element %d was found in index %d\n",element,indexing);
      }
	  
      
	  return 0;
    
}

int binarySearch(int arr[],int size,int element)
    {
        int left=0,right=size-1,mid;

        while(left<=right)
          {
              mid=(left+right)/2;
              if(arr[mid]==element)
               {
                   return mid;
               }
               if(arr[mid]<element)
               {
                 left=mid+1;  
               }
               else
                {
                  right=mid-1;
                }
          }
          return -1;
    }
