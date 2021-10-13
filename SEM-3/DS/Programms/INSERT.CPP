#include<stdio.h>
#include<conio.h>

int a[10],n,pos,val;
void print_array(int i, int n);
void insert();
void del();
void update();

void main()
{
	int i,o,o1;
	clrscr();

	// Taking n
	printf("Enter limit(maximum 10)= ");
	scanf("%d",&n);

	// Scanning elements
	for(i=0;i<n;i++) { printf("\na[%d]= ",i); scanf("%d",&a[i]); }

	start:
	// Printing elements
	print_array(0,n);

	printf("\nSelect Option: \n===================\n");
	printf("1. Insertion\n2. Deletation\n3. Updatation\n");
	printf("===================\n");
	o = getche();

	if(o == '1'){ insert(); print_array(0,n+1); }
	else if(o == '2'){ del(); print_array(0,n-1); }
	else if(o == '3'){ update(); print_array(0,n); }
	else{ printf("Invalid Option !"); }

	printf("\n\nWant to check again? ");
	o1 = getch();
	if(o1 == 'Y' || o1 == 'y'){ clrscr(); goto start; }
	else { clrscr(); printf("Bye Bye !"); }
	getch();
}

void print_array(int i, int n)
{
	printf("\nArray\n");
	for(i=0;i<n;i++) { printf("\n| %d",a[i]); }
	printf("\n\n");
}

void insert()
{
	int i;
	printf("\n\nEnter position= ");
	scanf("%d",&pos);
	printf("Enter value to be inserted= ");
	scanf("%d",&val);

	for(i=n;i>=pos-1;i--) {	a[i+1] = a[i]; }
	a[pos-1] = val;
}

void del()
{
	int i;
	printf("\n\nEnter position to be deleted= ");
	scanf("%d",&pos);

	for(i=pos-1;i<n;i++) {	a[i] = a[i+1]; }
}
void update()
{
	printf("\n\nEnter position to be edited= ");
	scanf("%d",&pos);
	printf("Enter value= ");
	scanf("%d",&val);

	a[pos-1] = val;
}