#include<stdio.h>
int main()
{
int x,c=1,i,a;
scanf("%d",&x);
for(i=1;i<=x/2;i++)
{
if(x%i==0)c++;
}
if(c==2)
{
printf("prime");
}
else
{
printf("not a prime");
}
}