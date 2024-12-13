#include<stdio.h>

void display(int arr[],int size);
void ind_Delection(int arr[],int size,int index);

int main()
{
  int arr[20]={77,8,12,27,88};
  
  int size=5,index=2;
  printf("Element in Array :%d\n",size);

  display(arr,size);
  ind_Delection(arr,size,index);
  size-=1;
  display(arr,size);
  printf("Element in Array :%d\n",size);

  return 0;
 }

void display(int arr[],int n)
 {
   //Traversal
   for(int i=0;i<n;i++)
     {
	   printf("%d ",arr[i]);
	 }
	 printf("\n");
  }
  void ind_Delection(int arr[],int size,int index)
   {
    //code for delection
	  for(int i=index;i<size-1;i++)
	    {
		  arr[i]=arr[i+1];
		}

    }

/*
Element in Array :5
77 8 12 27 88
77 8 27 88
Element in Array :4
*/
