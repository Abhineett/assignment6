#include<stdio.h>
void main()
{
    int num,n1=0,n2=1,nt;
    printf("enter a number to factorial=");
    scanf("%d",&num);
    printf("%d%d",n1,n2);
    for(int i=1;i<=num;i++)
    {
       nt=n1+n2;
       printf("%d",nt);
       n1=n2;
       n2=nt;

    }




}
