#include<stdio.h>
#include<conio.h>
void bubble_sort(int a[],int n);
void main()
{
int a[10],i,n;
clrscr();
printf("\n\nEnter no. of elelment::");
scanf("%d",&n);
printf("\n\nEnter Elemnts::");
for(i=0;i<n;i++)
{
	printf("\na[%d]=",i);
	scanf("%d",&a[i]);
}
bubble_sort(a,n);
printf("\n\nAfter sorting\n\n");
for(i=0;i<n;i++)
{
	printf("%2d ",a[i]);
}
getch();
}
void bubble_sort(int a[],int n)
{
	int exch=0,pass,i,temp,l;
	l=n-1;
	for(pass=0;pass<n-1;pass++)
	{
		for(i=0;i<l;i++)
		{
			if(a[i]>a[i+1])
			{
				temp=a[i];
				a[i]=a[i+1];
				a[i+1]=temp;
				exch++;
			}
		}
	printf("\nPass=%d\n",pass+1);
	for(i=0;i<n;i++)
		{
		if(i==l)
		{
			printf("%d ",a[i]);
		}
		else
		{
			printf("%d ",a[i]);
		}
		}
		if(exch==0)
		{
			break;

		}
		else
		{
			l=l-1;
		}
	}
}