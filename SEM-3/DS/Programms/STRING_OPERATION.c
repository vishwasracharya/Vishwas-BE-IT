#include<stdio.h>
#include<conio.h>
void main()
{
	char str1[20],str2[20],rev[20];
	int i,c=0,num,j,c1,flag=0;
	clrscr();
	printf("ENTER STRING1::");
	gets(str1);
	for(i=0;str1[i]!=NULL;i++)
	{
		c++;
	}
	printf("LENGTH::%d",c);
	printf("\n\nPRESS FOLLOWING NUMBER FOR OPERATION::\n");
	printf("\n\n1:-REVERSE \n2:-COPY STRING \n3:-CONCATE\n4:-COMPARE\n\n");
	printf("ENTER NUMBER::");
	scanf("%d",&num);
	switch(num)
	{

	     case 1:
		for(i=0;str1[i]!=NULL;i++)
		{
		     rev[c-(i+1)]=str1[i];
		     rev[c]=NULL;
		}
		printf("REVERSE STRING::%s",rev);
		break;


	     case 2:
		printf("\n\nENTER STRING2::");
		scanf("%s",str2);
		for(i=0;str2[i]!=NULL;i++)
		{
			str1[i]=str2[i];
		}
		str1[i]=NULL;
		printf("\nAFTER COPY OPERATION STRING 1 IS::%s",str1);
		break;


	     case 3:
		printf("\n\nENTER STRING TO CONCATE::");
		scanf("%s",str2);
		for(i=0,j=c ;str2[i]!='\0';i++,j++)
		{
			str1[j]=str2[i];
		}
		str1[j]=NULL;
		printf("\nAFTER CONCATE OPERATION STRING 1 IS::");
		puts(str1);
		break;


	     case 4:
		printf("\n\nENTER STRING TO COMPARE::");
		scanf("%s",str2);
		c1=strlen(str2);
		if(c!=c1)
		{
			printf("BOTH STRINGS ARE DIFFERENT\n");
		}
		else
		{
			for(i=0;str1[i]!=NULL;i++)
			{
				if(str1[i]==str2[i])
				{
					flag=1;
				}
				else
				{
					flag=0;
					break;
				}
			}
			if(flag==1)
			{
				printf("BOTH STRINGS ARE EQUAL\n");
			}
			else
			{
				printf("BOTH STRINGS ARE DIFFERENT\n");
			}
		}
		break;


	     default:
			printf("\n\n....INVALID CHOICE....");
			break;
	}
getch();
}