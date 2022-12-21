#include<stdio.h>
int main()
{
    int num,temp,m=1,s=0,d;
    scanf("%d",&num);
    temp=num;
    while(temp!=0)
    {
        d=temp%10;
        s=s+d;
        m=m*d;
        temp=temp/10;
    }
    if(s==m)
    printf("Spy Number");
    else
    printf("Not Spy Number");
}