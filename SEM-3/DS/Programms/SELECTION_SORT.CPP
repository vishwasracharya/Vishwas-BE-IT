#include<stdio.h>
#include<conio.h>
void selection_sort(int a[],int n);
void main()
{
	int a[10],i,n;
	clrscr();
	printf("\n How many elements:");
	scanf("%d",&n);
	printf("\n\n Enter %d elements\n",n);
	for(i=0;i<n;i++)
	{

	  scanf("%d",&a[i]);
	}
	selection_sort(a,n);
	printf("\n After sorting::");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	getch();
}
void selection_sort(int a[],int n)
{
	int min,pass,temp,i;

	for(pass=0;pass<n;pass++)
	{
	   min=pass;
	   for(i=pass+1;i<n;i++)
	   {
	      if(a[i]<a[min])
	      {
		  min=i;
	      }
	   }
	   if(min!=pass)
	     {
	       temp=a[pass];
	       a[pass]=a[min];
	       a[min]=temp;


	     }

	   printf("\n Pass:%d  ",pass+1);

	for(i=0;i<n;i++)
	{
	      printf("%d  ",a[i]);
	}

     }
}


