#include<stdio.h>
Void main()
{
int i,j,n;
clrscr();
printf("enter the number of rows");
scanf("%d",&n);
for(i=1;i<=n;i++);
{
for(j=1;j<=n;j++)
{
if(i==1 || i==n || j==1 || j==n)
{
printf("+");
}
else
{
printf(" ");
}
}
printf("\n");

getch();
}
