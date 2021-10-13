#include<stdio.h>
#include<conio.h>
void main()
{
	int a[20],n,i,p,val,temp,op;
	clrscr();
	printf("\n\nENTER SIZE OF ARRAY::");
	scanf("%d",&n);
	for(i=0; i<n;i++)
	{
		printf("\na[%d]=",i);
		scanf("%d",&a[i]);
	}
	label:
	printf("\n\nOPERATION::");
	printf("\n\nPRESS 1 FOR INSERT\nPRESS 2 FOR DELETE\nPRESS 3 FOR EDIT");
	printf("\n\nENTER OPERATION NUMBER:: ");
	scanf("%d",&op);
	if(op==1)
	{
		printf("\n\nENTER POSITION::");
		scanf("%d",&p);
		printf("\n\nENTER VALUE::");
		scanf("%d",&val);
		temp=n-1;
		while(temp>=p)
		{
			 a[temp+1]=a[temp];
			 temp--;
		}
		a[p]=val;
		printf("\n\nAFTER INSERTION ARRAY IS::");
		for(i=0;i<n+1;i++)
		{
			printf("\na[%d]=%d",i,a[i]);
		}
	}
	else if(op==2)
	{
		printf("\n\nENTER POSITION::");
		scanf("%d",&p);
		temp=p;
		while(temp<n-1)
		{
		       a[temp]=a[temp+1];
		       temp++;
		}
		printf("\n\nAFTER DELETION ARRAY IS::");
		for(i=0;i<n-1;i++)
		{
			printf("\na[%d]=%d",i,a[i]);
		}
	}
	else
	{
		printf("\n\nENTER POSITION::");
		scanf("%d",&p);
		printf("\n\nENTER NEW VALUE::");
		scanf("%d",&val);
		a[p]=val;
		printf("\n\nAFTER EDIT OPERATION ARRAY IS::");
		for(i=0;i<n;i++)
		{
			printf("\na[%d]=%d",i,a[i]);
		}
	}
	getch();
}