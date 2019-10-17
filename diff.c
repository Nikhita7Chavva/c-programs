#include<stdio.h>
int main()
{
int r,c,s,n;
printf("enter no.of rows");
for(r=1;r<=n;r++)
{

for(c=n;c>=r;c--)
{
printf("+");
}
for(s=2;s<=r;s++)
{
printf(" ");
}
for(s=2;s<=r;s++)
{
printf(" ");
}

for(c=n;c>=r;c--)
{
printf("+");
}
printf("\n");
}
getch();
return 0;
}
