#include<stdio.h>
#include<stdlib.h>

struct stack{
              int size;
			  int top;
			  int *arr;
			 };

int isEmpty(struct stack *ptr);

int main()
{
 
 struct stack *s;
 s->size=20;
 s->top=-1;
 s->arr=(int *)malloc(s->size*sizeof(int));
  
  // Adding an element to the stack
  s->arr[0]=3;
  s->top++;

 //check stack is Empty or not
   
   if(isEmpty(s))
     {
	   printf("The stack is Empty\n");
	 }
	else
	 {
	  printf("The stack is not empty\n");
	 }

 return 0;
}

int isEmpty(struct stack *ptr)
   {
     if(ptr->top==-1)
	   {
	     return 1;
		}
	  else
	   {
	    return 0;
	   }
	}
