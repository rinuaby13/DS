#include<stdio.h>
#include<stdlib.h>
#define max 5
int a[max];
int top=-1;
void push()
{
	int x;
	if((top+1)==max)
		printf("\n FULL ");
	else
	{
		int x;
		printf(" Enter the value to be inserted : ");
		scanf("%d",&x);
		a[++top]=x;
	}
}
void pop()
{		
	if(top==-1)
		printf("EMPTY STACK ");
	else 
		printf(" The element popped is %d",a[top--]);
}
void display()
{
	if(top==-1)
		printf("EMPTY STACK");
	else
	{
		for(int i=top;i>=0;i--)
			printf("\n%d   ",a[i]);
	}
}
int main()
{
	int ch;
	do
	{
		printf("\n1. PUSH\n2. POP\n3. DISPLAY\n4. EXIT\nEnter your choice(1-4) : ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: push();
				break;
			case 2: pop();
				break;
			case 3: display();
				break;
			case 4: exit(1);	
			default:printf("invalid");
		}
	}while(ch>=1&&ch<=4);
}
