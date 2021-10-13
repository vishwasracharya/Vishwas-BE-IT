#include<stdio.h>
#include<conio.h>
#include<alloc.h>
#include<process.h>
void create();
void insert();
void delet();
void display();

struct node
{
	int info;
	struct node *link;
};

struct node *first=NULL,*last=NULL,*next,*prev,*New;

void create()
{
	  New=(struct node*)malloc(sizeof(struct node));
	  printf("\nENTER THE DATA: ");
	  scanf("%d",&New->info);
	  New->link=NULL;
	  first=New;
	  last=New;
}

void insert()
{
  int pos,c=1;
  New=(struct node*)malloc(sizeof(struct node));
  printf("\nENTER THE DATA: ");
  scanf("%d",&New->info);
  printf("\nENTER THE POSITION: ");
  scanf("%d",&pos);
  if((pos==1) &&(first!=NULL))
  {
	  New->link = first;
	   first=New;
  }
  else
  {
    next=first;
    while(c<pos)
    {
	    prev=next;
	    next=prev->link;
	    c++;
    }
    if(prev==NULL)
    {
	    printf("\nINVALID POSITION\n");
    }
    else
    {
	    New->link=prev->link;
	    prev->link=New;
    }
 }
}
void delet()
{
	int pos,c=1;
	printf("\nENTER THE POSITION : ");
	scanf("%d",&pos);
	if(first==NULL)
	{
		printf("\nLIST IS EMPTY\n");
	}
	else if(pos==1 && first->link==NULL)
	{
		printf("\n DELETED ELEMENT IS %d\n",first->info);
		free(first);
		first=NULL;
	}
	else if(pos==1 && first->link!=NULL)
	{
		New=first;
		first=first->link;
		New->link=NULL;
		printf("\n DELETED ELEMENT IS %d\n",New->info);
		free(New);
	}
	else
	{
		next=first;
		while(c<pos)
		{
			New=next;
			next=next->link;
			c++;
		}
		New->link=next->link;
		next->link=NULL;
		if(next==NULL)
		{
			printf("\nINVALID POSITION\n");
		}
		else
		{
			printf("\n DELETED ELEMENT IS %d\n",next->info);
			free(next);
		}
	}
}

void display()
{
	  New=first;
	  while(New!=NULL)
	  {
		    printf("\n %d",New->info);
		    New=New->link;
	  }
}

void main()
{
	int ch;

	printf("\n\nSINGLY LINKED LIST");
	while(1)
	{
		//clrscr();
		printf("\n\n1.CREATE\n2.INSERT\n3.DELETE\n4.EXIT");
		printf("\n\nENTER YOUR CHOICE : ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				create();
				display();
			break;
			case 2:
				insert();
				display();
			break;
			case 3:
				delet();
				display();
			break;
			case 4:
				exit(0);
			default:
				   printf("Invalid choice...");
		}
	}
}