#include<stdio.h>
#include<conio.h>
void insertion_sort(int a[],int n);
void main()
{
   int i,n,a[10];
   clrscr();
   printf("\n\nEnter the element:");
   scanf("%d",&n);
   printf("\n\n Enter element");
   for(i=1;i<=n;i++)
   {
	 scanf("%d",&a[i]);
   }
   insertion_sort(a,n);
   printf("\n ----INSERTION SORT----\n\nSorted Array:\n");
   for(i=1;i<=n;i++)
   {
	 printf("%d  ",a[i]);
   }
   getch();
}
void insertion_sort(int a[],int n)
{
   int i,j,temp;
   a[0]=0;
   for(i=1;i<=n;i++)
   {
	  temp=a[i];
	  j=i-1;
	  while(temp<a[j])
	  {
	      a[j+1]=a[j];
	      j--;
	  }
	  a[j+1]=temp;
   }

}