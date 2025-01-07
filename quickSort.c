#include<stdio.h>
void quickSort(int A[],int low,int high);
int  partition(int A[],int low,int high);
void printArray(int A[],int size);

int main()
{
  int A[]={3,5,2,13,12};
  
  int n=sizeof(A)/sizeof(A[0]);
  printf("Element in array :%d\n",n);

  printArray(A,n);
  quickSort(A,0,n-1);
  printArray(A,n);

  return 0;
  }
  void quickSort(int A[],int low,int high)
   {
     int partitionIndex;
	 if(low<high)
	  {
	   partitionIndex=partition(A,low,high);
	   quickSort(A,low,partitionIndex-1);
	   quickSort(A,partitionIndex+1,high);
	  }
  }

  int partition(int A[],int low,int high)
   {
      int pivot=A[low];
	  int i=low+1;
	  int j=high;
	  int temp;
	   do{
	            while(A[i]<=pivot)
				 {
				  i++;
				 }
				 while(A[j]>pivot)
				  {
				   j--;
				  }
				  if(i<j)
				   {
				     temp=A[i];
					 A[i]=A[j];
					 A[j]=temp;
				  }
			 }while(i<j);
			
		temp=A[low];
		A[low]=A[j];
		A[j]=temp;

		return j;
	}

	void printArray(int A[],int size)
	 {
	  for(int i=0;i<size;i++)
	   {
	     printf("%d\t",A[i]);
		}
		printf("\n");
	   }
