#include<stdio.h>
void main()
{
    int n,sum=0,s;
    printf("Enter number=");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
         s=i*i*i;
         sum=sum+s;

    }
    printf("%d",sum);
}

