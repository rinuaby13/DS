#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node* link;
};
struct node* top=NULL;
struct node* temp;


void insnode()
{  struct node *newnode;
   newnode=(struct node *)malloc(sizeof(struct node *));
   int item;
   if(newnode==NULL)
   {  printf("No space\n");
      
   }
   else 
   { 
     printf("Enter the data:\n");
     scanf("%d",&item);
     newnode->data=item;
     if(top==NULL)
     {   top=newnode;
         newnode->link=NULL;
     }
     else
     {   newnode->link=top;
         top=newnode;
     }
   }
}
 
void delnode()
{  int item;
   if(top==NULL)
   {   printf("Empty stack\n");
       return;
   }
   else
   {   temp=top;
       top=top->link;
       item=temp->data;
       printf("The deleted element is:%d\n",item);
       free(temp);
   }
}

void disnode()
{  if(top==NULL)
   {   printf("Empty stack\n");
       return;
   }
   else
   {   temp=top;
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
		printf("\n1. Push\n2. Pop\n3. Display\n4. Exit\nEnter your choice: \n");
		scanf("%d",&choice);
		switch(choice)
                {
		  case 1:insnode();
                         break;
		  case 2:delnode();
                         break;
		  case 3:disnode();
                         break;
		  case 4:exit(0);
		  default:printf(" Wrong choice \n");
	        }
       }while(choice<4);
}


