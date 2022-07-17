#include<stdio.h>
void main()
{

    int num,i,r;
    printf("enter at least two digits number=");
    scanf("%d",&num);

    while(num!=0)
    {
        r=num%10;
        printf("%d",r);
        num=num/10;

    }












}
