#include<stdio.h>
int linear_search(int arr[],int size,int element);

int main()
{
  int arr[]={99,88,21,42,73,54};

  int size=sizeof(arr)/sizeof(arr[0]);
  printf("size of element : %d\n",size);

  for(int i=0;i<size;i++)
     {
	  printf("%d\t",arr[i]);
      }
    
	printf("\n");

  int element;
  printf("Enter a element : ");
  scanf("%d",&element);
  printf("element :%d\n",element);

  int search_index=linear_search(arr,size,element);
  printf("search_index : %d\n",search_index);

return 0;
}

int linear_search(int arr[],int size,int element)
   {
     for(int i=0;i<size;i++)
	   {
	     if(arr[i]==element)
		   {
		     return i;
		    }
	    }

		return -1;
   }
