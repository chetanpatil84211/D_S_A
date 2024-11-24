#include<stdio.h>
#include<limits.h>

int main()
{
    int arr[]={5,4,3,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);
	printf("size of Array Element is :%d\n",n);

	for(int i=0;i<n;i++)
	  {
	    printf("%d\t",arr[i]);
	   }

	   printf("\n");
	
    
    for(int i=0;i<n-1;i++)
      {
          int min=INT_MAX;
          int miniindex=-1;
          
                for(int j=i;j<=n-1;j++)
                  {
                      if(min>arr[j])
                       {
                           min=arr[j];
                           miniindex=j;
                       }
                  }
            int temp=arr[miniindex];
            arr[miniindex]=arr[i];
            arr[i]=temp;
			//printf("%d\n",i);
      }
      
      printf("Sorted Array \n");
      for(int i=0;i<n;i++)
        {
            printf("%d\t",arr[i]);
        }


        return 0;
}
