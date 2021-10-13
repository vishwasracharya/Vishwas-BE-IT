#include<stdio.h>
#include<conio.h>
void main()
{
    int n,gap,s[20],i,temp;
    int swap=1;
    clrscr();
    printf("\n\nEnter the size of array:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
	scanf("%d",&s[i]);
    }
    gap=n/2;
    while(gap>=1)
    {
	swap=1;
	while(swap)
	{
	    for(i=0;i<n-gap;i++)
	    {
	       if(s[i]>s[i+gap])
	       {
	       temp=s[i];
	       s[i]=s[i+gap];
	       s[i+gap]=temp;
	       swap=0;
	       }
	    }
	}
	gap=gap/2;
    }

    printf("\n-----SHELL SORT----\n\nAfter sorting::\n\n");
    for(i=0;i<n;i++)
    {
       printf("%d  ",s[i]);
    }
    getch();
}