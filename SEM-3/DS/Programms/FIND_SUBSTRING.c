#include<stdio.h>
#include<conio.h>
#include<string.h>

void extract(char *,char *,char *,int,int);
void main()
{

char s[50]="working with strings is fun";
char t[50];
char d[50];
int pos,len;

printf("enter the position and length to be extracted= ");
scanf("%d%d",&pos,&len);


printf("\n\n");
extract(s,t,d,pos,len);
puts(d);
getch();
}
void extract(char *s,char *t,char *d,int pos,int len)
{

s=s+(pos-1);
t=s+len;
while(s!=t)
{
*d=*s;
s++;
d++;
}
*d='\0';


}
