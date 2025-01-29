//Singly Linear Linked List

#include<stdio.h>
#include<stdlib.h>

struct node{
             int data;
			 struct node *next;
			};

struct node *head = NULL;

 struct node *create_node(int data);
 void add_first(int data);
 void display();
 void add_last(int data);




int main(void)
{
  add_first(10);
  add_first(20);
  add_first(30);
  add_first(40);
  add_last(100);//    40  30  20 10   100

  display();


  return 0;
 }

 //Head->40->30->20->10->100

 struct node *create_node(int data)
 {
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
	ptr->data = data;
	ptr->next = NULL;
    
	 return ptr;
  }

 void add_first(int data)
 {
   struct node *ptr = create_node(data);

   if(head == NULL)
     {
	   head = ptr;
	 }
	else
	{
	  ptr->next = head;

	  head = ptr;
	 }
  }

 void display()
 {
   if(head == NULL)
      printf("List is Empty !\n");
	else
	 {
	   struct node *temp = head;
        
		printf("Head");
        while(temp != NULL)
		  {
		    printf("->%d",temp->data);

			temp = temp->next;
		  }
	  }
	  printf("\n");
  }
  
  void add_last(int data)
  {
      struct node *ptr = create_node(data);

	   if(head == NULL)
	            head = ptr;

	   else
	       {
		     struct node *temp = head;

			 while(temp->next != NULL)
			      {
				    temp = temp->next;
				  }

				  temp->next = ptr;
			}
   }







