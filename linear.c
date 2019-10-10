#include<stdio.h>
int linear(int a[],int n,int s);
int binary(int a[],int n,int s);
int sort(int a[],int n);
void main()
{
 int a[20],n,s,x;
 printf("Enter no of elements :");
 scanf("%d",&n);
 printf("Enter array elements :");
 for(int i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }
 printf("Enter element to be searched :");
 scanf("%d",&s);
 printf("Enter 1 for linear search");
 printf("\nEnter 2 for binary search");
 scanf("%d",&x);
 switch(x)
 {
  case 1:linear(a,n,s);
  break;
  case 2:binary(a,n,s);
  break;
  default :printf("invalid input");
 }
}

int linear(int a[],int n,int s)
{
 int f;
 for(int i=0;i<n;i++)
 {
  if (a[i]==s)
   {
    f=i+1;
   }
 }
 if (f>0)
  {
   printf("Element found in position %d",f); 
  }
 else
  {
   printf("Element not found");
  }
}

int sort(int a[],int n)
{
 int i,j,temp;
 for (i=0;i<n;++i) 
  {
   for (j=i+1;j<n;++j)
    {
     if (a[i]>a[j]) 
      {
       temp=a[i];
       a[i]=a[j];
       a[j]=temp;
      }
    }
  }
printf("The numbers  are:\n");
for (i=0;i<n;++i)
printf("%d\n",a[i]);
}


int binary(int a[],int n,int s)
{
 int first,middle,last;
 sort(a,n);
 first=0;
 last=n-1;
 middle=(first+last)/2; 
 while (first<=last)
  {
   if(a[middle]<s)
     first=middle+1;    
   else if (a[middle]==s)
    {
     printf("\n%d found at location %d.\n", s,middle+1);
     break;
    }
     else
      {
       last=middle-1;
      }
    middle=(first+last)/2;
  }
   if (first>last)
      printf("Not found! %d isn't present in the list.\n",s); 
}

