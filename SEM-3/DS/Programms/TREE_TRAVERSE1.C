#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct tree                                        //creating structure
{
	int data;                         //data field of node
	struct tree *lchild,*rchild;               //left child & right child of node
};
struct tree *insert(struct tree *p,int n);     //function for insertion
void inorder(struct tree *p);                      //function for inorder traversal
void preorder(struct tree *p);                   // function for preorder traversal
void postorder(struct tree *p);                  // function for postorder traversal

void main()                      //main function
{
	int x,y,i;
	struct tree *root;
	clrscr();
	root=NULL;
	printf("Enter the no. of nodes in the tree\n");
	scanf("%d",&x);
	while(x-->0)
	{
		printf("Enter the data part of the node\n");
		scanf("%d",&y);
		root=insert(root,y);
	}
	while(1)
	{
	clrscr();
	printf("\t\tEnter the traversal u want\n");
	printf("1.Inorder.\n2.Preorder.\n3.Postorder.4.Exit\n");
	scanf("%d",&i);
	switch(i)
	{
	case 1:

		printf("The inorder traversal is \n");
		inorder(root);                        //function calling
		break;
	case 2:

		printf("The preorder traversal is\n");
		preorder(root);                           //function calling
		break;
	case 3:

		printf("The postorder traversal is\n");
		postorder(root);                            // function calling
		break;
	case 4:
		exit(0);
		break;
	default:
		printf("\n\nInvalid Choice\n\n");
		break;
	}

	 getch();
	}
}

//function definition for insertion
struct tree *insert(struct tree *p,int n)
{
	struct tree *temp1,*temp2;
	if(p==NULL)
	{
		p=(struct tree *)malloc(sizeof(struct tree));
		p->data=n;
		p->lchild=p->rchild=NULL;
	}
	else
	{
		temp1=p;
		while(temp1!=NULL)
		{
			temp2=temp1;
			if(n<temp1->data)
				temp1=temp1->lchild;
			else
				temp1=temp1->rchild;
		}
		if(n<temp2->data)
		{
			temp2->lchild=(struct tree *)malloc(sizeof(struct tree));
			temp2=temp2->lchild;
			temp2->data=n;
			temp2->lchild=temp2->rchild=NULL;
		}
		else
		{
			temp2->rchild=(struct tree *)malloc(sizeof(struct tree));
			temp2=temp2->rchild;
			temp2->data=n;
			temp2->lchild=temp2->rchild=NULL;
		}
		}
		return p;
}
//function definition for inorder traversal

void inorder(struct tree *p)
{
	if(p!=NULL)
	{
		inorder(p->lchild);
		printf("%d ",p->data);
		inorder(p->rchild);
	}
}

//function definition for preorder traversal
void preorder(struct tree *p)
{
	if(p!=NULL)
	{
		printf("%d ",p->data);
		preorder(p->lchild);
		preorder(p->rchild);
	}
}

//function definition for postorder traversal
void postorder(struct tree *p)
{
	if(p!=NULL)
	{
		postorder(p->lchild);
		postorder(p->rchild);
		printf("%d ",p->data);
	}
}