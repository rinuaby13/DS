#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node* link;
};
struct node* front=NULL;
struct node* rear=NULL;
struct node* temp;


void enque()
{  struct node *newnode;
   newnode=(struct node *)malloc(sizeof(struct node *));
   int item;
   if(newnode==NULL)
   {  printf("Full\n");
      
   }
   else 
   { 
     printf("Enter the data:\n");
     scanf("%d",&item);
     newnode->data=item;
     if(front==NULL)
     {   front=newnode;
         rear=newnode;
         newnode->link=NULL;
     }
     else
     {   rear->link=newnode;
         newnode->link=NULL;
         rear=newnode;
     }
   }
}
 
void deque()
{  int item;
   if(front==NULL)
   {   printf("Queue-empty\n");
       return;
   }
   else
   {   temp=front;
       front=front->link;
       item=temp->data;
       printf("The deleted element is:%d\n",item);
       free(temp);
   }
}

void disque()
{  if(front==NULL)
   {   printf("Empty queue\n");
       return;
   }
   else
   {   temp=front;
       while(temp->link!=NULL)
       {   printf("%d->",temp->data);
           temp=temp->link;
       }
       printf("%d->",temp->data);
   }
}

int main()
{       int choice;
	do
	{
		printf("\n1.Insert\n2. Delete\n3. Display\n4. Exit\nEnter your choice: ");
		scanf("%d",&choice);
		switch(choice)
                {
		  case 1:enque();
                         break;
		  case 2:deque();
                         break;
		  case 3:disque();
                         break;
		  case 4:exit(0);
		  default:printf(" \nWrong choice \n");
	        }
       }while(1);
}


