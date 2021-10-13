#include<stdio.h>
#include<conio.h>
#define N 5
void main()
{
	int q[N],val,op,i,j,k,front=-1,rear=-1;

	while(1)
	{
		clrscr();
		printf("\nCIRCULAR QUEUE OPERATION \n");
		printf("\n1-PUSH \n2-POP \n3-DISPLAY \n4-EXIT \n");
		printf("\nSELECT OPERATION :- ");
		scanf("%d",&op);

		switch(op)
		{

		   case 1:

			if(rear>=N-1)
			{
				rear=0;
			}
			else
			{
				rear++;
			}
			if(rear==front)
			{
				if(rear==-1)
					rear=N-1;

				else
				{
					rear--;
				}
				printf("\nQUEUE OVERFLOW");
				break;
			}
			printf("ENTER VALUE TO PERFORM PUSH OPERATION :- ");
			scanf("%d",&val);
			q[rear]=val;
			printf("VALUE INSERTED...");
			if(front==-1)
				front=0;
			break;

		  case 2:
			if(front==-1)
			{
				printf("\nQUEUE UNDERFLOW");
			}
			else
			{
				val=q[front];

				if(front==rear||front==N-1)
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
			printf("front=%d   rear=%d",front,rear);
			if(front==-1)
			{
				printf("\nQUEUE IS EMPTY");
			}
			else
			{

				printf("\nNOW QUEUE IS :-\n");
				printf("\n front->");


				if(front>rear)
				{
					for(j=0;j<=rear;j++)
					{
						printf("%d\n",q[j]);
						printf("\t");
					}
					for(k=front;k<=N-1;k++)
					{
						printf("%d\n",q[k]);
						printf("\t");

					}
				}
				else
				{
					for(i=front;i<=rear;i++)
					{
						printf("%d\n",q[i]);
						printf("\t");
					}

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