#include<stdio.h>
int main()
{
int r,c,space,n;
printf("enter no.of rows\n");
scanf("%d",&n);
for(r=1;r<=n;r++)
{
for(space=1;space<=n-r;space++)
printf("");
for(c=1;(c<=2*r)-1;c++)
printf("*");
printf("\n");
}
for(r=n-1;r>=1;r--)
{
for(space=1;space<=n-r;space++)
printf("");
for(c=1;(c<=2*r)-1;c++)
printf("*");
printf("\n");
}
getch();
return 0;
