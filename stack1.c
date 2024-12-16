#include<stdio.h>
#define N 5 // Maximum size of the stack

// Function prototypes
void pop();
void push();
void peek();
void display();

// Declare the stack and the top
int stack[N];
int top=-1;

int main()
{
           printf("Stack Size is :%d\n",N);

  int ch;
    do{
	     printf("Enter choice:\n1.push\n2.pop\n3.peek\n4.display\n");
		 scanf("%d",&ch);
           
		   // Switch block to handle different stack operations
		   switch(ch)
		    {
			  case 1 : push();
			          break;
			  case 2 : pop();
			          break;
			  case 3 : peek();
			          break;
			  case 4 : display();
			          break;
			  default:printf("Invalid choice\n");
			          break;
		     }
		}while(ch !=0);

	return 0;
}

// Function to push an element onto the stack
void push()
 {
   int x;
   printf("Enter data: ");
   scanf("%d",&x);

      if(top==N-1)
	    {
		 printf("stack is Overflow\n");
		}
	  else
	    {
		  top++;
		  stack[top]=x;
		}
 }

// Function to pop an element from the stack
 void pop()
  {
   int  element;
      if(top==-1)
	    {
		  printf("satac is Underflow\n");
		 }
		 else
		 {
		    element=stack[top];
			top--;
			printf("pop element %d\n",element);
   		  }

  }
 
 // Function to peek at the top element of the stack (without removing it)
 void peek()
   {
     if(top==-1)
	   {
	     printf("Stack  is Empty\n");
	   }
	   else
	   {
        printf("peek  element is :%d\n",stack[top]);
	   }

  }
  
  // Function to display all the elements in the stack
  void display()
  {
     int i;
	 if(top==-1)
	    {
		 printf("Stack is Empty\n");
		}
      else
	    {  
		   printf("Stack elements: ");
		    for(i=top;i>=0;i--)
	       {
	         printf("%d  ",stack[i]);// Print each element in the stack
	       }
		 }
		 
	    printf("\n");
}
