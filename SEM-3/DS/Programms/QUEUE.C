#include<stdio.h>
#include<conio.h>
#define N 5
void main()
{
	int q[N],val,op,i,front=-1,rear=-1;

	while(1)
	{
		clrscr();
		printf("\nQUEUE OPERATION \n");
		printf("\n1-PUSH \n2-POP \n3-DISPLAY \n4-EXIT \n");
		printf("\nSELECT OPERATION :- ");
		scanf("%d",&op);

		switch(op)
		{

		   case 1:
			if(rear==N-1)
			{
				printf("\nQUEUE OVERFLOW");
			}
			else
			{
				printf("ENTER VALUE TO PERFORM PUSH OPERATION :- ");
				scanf("%d",&val);
				rear++;
				q[rear]=val;
				printf("VALUE INSERTED...");
				if(front==-1)
					front=0;
			}
			break;

		  case 2:
			if(front<0)
			{
				printf("\nQUEUE UNDERFLOW");
			}
			else
			{
				val=q[front];
				if(front==rear)
				{
					front=-1;
					rear=-1;
				}
				else
				{
					front++;
				}
				printf("\nPOPED ELEMENT :-%d",val);
			}
			break;

		   case 3:
			if(front==-1)
			{
				printf("\nQUEUE IS EMPTY");
			}
			else
			{
				printf("\nNOW QUEUE IS :-\n");
				printf("\n front->");

				for(i=front;i<=rear;i++)
				{
					printf("%d\n",q[i]);
					printf("\t");

				}
			}
			break;

		   case 4:
			exit(0);
			break;

		   default:
			printf("\nINVALID CHOICE FOR OPERATION");
			break;
		}
	getch();
	}
}