#include<stdio.h>
#include<conio.h>
#define N 5
void main()
{
	int s[N],val,op,i,top=-1;

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
			if(top>=N-1)
			{
				printf("\nSTACK OVERFLOW");
			}
			else
			{
				printf("ENTER VALUE TO PERFORM PUSH OPERATION :- ");
				scanf("%d",&val);
				top++;
				s[top]=val;
				printf("VALUE INSERTED...");
			}
			break;

		  case 2:
			if(top<0)
			{
				printf("\nSTACK UNDERFLOW");
			}
			else
			{
				val=s[top];
				top--;
				printf("\nPOPED ELEMENT :-%d",val);
			}
			break;

		  case 3:
			printf("\nENTER POSITION TO SHOW DATA :- ");
			scanf("%d",&i);
			if(i>0)
			{
				if((top-i+1)<0)
				{
					printf("\nSTACK UNDERFLOW");
				}
				else
				{
					val=s[top-i+1];
					printf("\nDATA AT POSITION %d FROM TOP= %d",i,val);
				}
			}
			else
			{
				printf("\nINVALID POSITION");
			}
			break;

		  case 4:
			printf("\nENTER POSTION TO CHANGE THE VALUE :- ");
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
				printf("VALUE CHANGED AT THE POSITION %d...",i);
			}
			break;

		   case 5:
			if(top==-1)
			{
				printf("\nSTACK IS EMPTY");
			}
			else
			{
				printf("\nNOW STACK IS :-\n");
				printf("\n   top->");

				for(i=top;i>=0;i--)
				{
					printf("%d\n",s[i]);
					printf("\t");

				}
			}
			break;

		   case 6:
			exit(0);
			break;

		   default:
			printf("\nINVALID CHOICE FOR OPERATION");
			break;
		}
	getch();
	}
}