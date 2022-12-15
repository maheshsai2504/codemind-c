#include<stdio.h>
int main()
{
    int a,i,c;
    scanf("%d",&a);
    int n[a];
    for(i=0;i<a;i++)
    {
        scanf("%d",&n[i]);
    }
    int b;
    scanf("%d",&b);
    for(i=0;i<a;i++)
    {
       if(b==n[i])
       {
       c=1;
       break;
       }
    }
    if(c==1)
    {
    printf("True");
        
    }
    else if(c!=1)
    {
    printf("False");
    }
}