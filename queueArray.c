#include<stdio.h>
#include<stdlib.h>

#define N 5

void enqueue(int x);
void dequeue();
void peek();
void display();

int queue[N];
int front=-1;
int rear=-1;

int main()
{
 
 while(1)
 {
  int choice;
  printf("Enter a  choice: ");
  printf("\n1.enqueue\n2.dequeue\n3.peek\n4.display\n5.exit\n");
  scanf("%d",&choice);

  switch(choice)
   {
    case 1 : int x;
	         printf("Enter a value: ");
			 scanf("%d",&x);
			 enqueue(x);
	         break;
    case 2 : dequeue();
	         break;
    case 3 : peek();
	         break;
    case 4 : display();
	         break;
	case 5 : printf("Exiting program...\n");
	         exit(0);
	         break;
   default : printf("Enter valid choice\n");
	        break;
	}
 }
  return 0;
}

// Function to add an element to the rear of the queue
void enqueue(int x)
{
 
 if(rear==N-1)
   {
    printf("Overflow\n");
   }
   else if(front==-1 && rear==-1)
   {
     front=rear=0;
	 queue[rear]=x;
  }
  else
  {
   rear++;
   queue[rear]=x;
  }
 }

 void dequeue()
  {
   if(front==-1 && rear==-1)
     {
	   printf("Underflow\n");
	 }
	 else if(front==rear)
	 { 
	   front=rear=-1;
	  }
	 else
	  {
	    printf("%d",queue[front]);
	    front++;
	  }
	}
	  
 void peek()
  {
    if(front==-1 && rear==-1)
	  {
	   printf("Queue is Empty\n");
	   }
	  else
	  {
	   printf("%d\n",queue[front]);
	  }
  }

  void display()
  {
   if(front==-1 && rear==-1)
    {
	  printf("queue is Empty\n");
	}
	else
   	{
	  printf("Queue : ");
	  for(int i=front;i<rear+1;i++)
	     {
		  printf("%d\t",queue[i]);
		  }
		  printf("\n");
	}
 }
/*
This is a C program that implements a queue data 
structure using a static array. It allows users to 
perform operations such as enqueue (add an item to 
the queue), dequeue (remove an item from the queue), 
peek (view the front item of the queue), and display 
(show all items in the queue). The queue is implemented
*/






