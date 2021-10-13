#include<stdio.h>
#include<conio.h>
#include<process.h>
#define N 5
void push();
void pop();
void peep();
void change();
void display();
int s[N],val,op,i,top=-1;
void main()
{
	while(1)
	{
	clrscr();
	printf("\nSTACK OPERATION \n");
	printf("\n1-PUSH \n2-POP \n3-PEEP \n4-CHANGE \n5-DISPLAY \n6-EXIT \n");
	printf("\nSELECT OPERATION :- ");
	scanf("%d",&op);

		switch(op)
		{

		   case 1:
			push();
			break;

		  case 2:
			pop();
			break;

		  case 3:
			peep();
			break;

		  case 4:
			change();
			break;

		   case 5:
			display();
			break;

		   case 6: exit(0);
			break;

		   default:
			printf("\nINVALID CHOICE FOR OPERATION");
			break;
		}
	     // printf("\nSELECT OPERATION :- ");
	     // scanf("%d",&op);

	getch();
	}
}
void push()
{
	if(top>=N)
	{
		printf("STACK OVERFLOW");
	}
	else
	{
		printf("ENTER VALUE TO PERFORM PUSH OPERATION :- ");
		scanf("%d",&val);
		top++;
		s[top]=val;
	}
}
void pop()
{
	if(top<0)
	{
		printf("STACK UNDERFLOW");
	}
	else
	{
		val=s[top];
		top--;
		printf("POPED ELEMENT :-%d",val);
	}

}
void peep()
{
	printf("ENTER POSITION TO SHOW DATA :- ");
	scanf("%d",&i);
	if((top-i+1)<=0)
	{
		printf("STACK UNDERFLOW");
	}
	else
	{
		val=s[top-i+1];
		printf("DATA AT LOCATION %d FROM TOP= %d",i,val);
	}
}
void change()
{
	printf("ENTER POSTION TO CHANGE THE VALUE :- ");
	scanf("%d",&i);
	if((top-i+1)<0)
	{
		printf("\nSTACK UNDERFLOW");
	}
	else
	{
		printf("\nENTER NEW VALUE FOR %d POSITION :- ",i);
		scanf("%d",&val);
		s[top-i+1]=val;
	}
}
void display()
{
	if(top==-1)
	{
		printf("\nSTACK IS EMPTY");
	}
	else
	{
		printf("\nNOW STACK IS :-");
		printf("\n   top->");
		for(i=top;i>=0;i--)
		{
			printf("%d\n",s[i]);
			printf("\t");
		}
	}
}