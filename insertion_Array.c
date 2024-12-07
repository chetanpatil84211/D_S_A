#include<stdio.h>
void display(int arr[],int size);
int indInsertion(int arr[],int size,int element,int capacity,int index);
int main()
{
      int arr[100]={7,8,12,27,88};
      int size=5,element=75,index=3;
      
	  printf("element is :%d\n",element);
	  printf("index is : %d\n",index);

	  display(arr,size);
	  indInsertion(arr,size,element,100,index);
	  size+=1;
	  display(arr,size);

     return 0;
 }
 void display(int arr[],int size)
  {
    for(int i=0;i<size;i++)
	  {
	    printf("%d\t",arr[i]);
      }
	  printf("\n");
  }
  int indInsertion(int arr[],int size,int element,int capacity,int index)
    {
	   if(size>=capacity)
	     {
		   return -1;
		 }

	   for(int i=size-1;i>=index;i--)
	     {
		   arr[i+1]=arr[i];
		 }

		 arr[index]=element;

		 return 1;
	  }
	  















