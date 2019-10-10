#include<stdio.h>
#include<stdlib.h>
#define max 6
int a[max];
int top1=-1,top2=max;
void push1()
{
	if((top1+1)==top2)
		printf(" STACK IS FULL ");
	else
	{
		int x;
		printf("Enter the element to be inserted : ");
		scanf("%d",&x);
		a[++top1]=x;
	}
}
void push2()
{
	if((top2-1)==top1)
		printf("STACK IS FULL");
	else
	{
		int x;
		printf("Enter the element to be inserted: ");
		scanf("%d",&x);
		a[--top2]=x;
	}
}
void pop1()
{
	if(top1==-1)
		printf(" S1 is empty \n");
	else
		printf("The element popped is %d",a[top1--]);
}
void pop2()
{
	if(top2==max)
		printf("S2 is empty \n");
	else
		printf("The element popped is %d",a[top2++]);
}
void display1()
{
	if(top1==-1)
		printf(" S1 is empty  ");
	else
		for(int i=top1;i>=0;i--)
			printf("\n%d  ",a[i]);
}
void display2()
{
	if(top2==max)
		printf("S2 is empty ");
	else 
		for(int i=top2;i<max;i++)
			printf("\n%d ",a[i]);
}	
int main()
{
	int ch;
	do
	{
		printf("\n1. Push into  S1\n2. Push into S2\n3. Pop from S1\n4. Pop from S2\n5. Display S1\n6. Display S2\n7. Exit\nEnter your choice(1-7) : ");
		scanf("%d",&ch);
		switch(ch)
		{
			case  1: push1();
				break;
			case 2: push2();
				break;
			case 3: pop1();
				break;
			case 4: pop2();
				break;
			case 5: display1();
				break;
			case 6: display2();
				break;
			case 7: exit(1);
			default: printf(" INVALID");
		}
	}while(ch>=1&&ch<=7);
}
