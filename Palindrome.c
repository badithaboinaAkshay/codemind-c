#include<stdio.h>
int main()
{
    int n,r,t,rev=0;
    scanf("%d",&n);
    t=n;
    while(n!=0)
{
    r=n%10;
    rev=rev*10+r;
    n=n/10;
}
if(t==rev)
{
    printf("True");
}
else
{
    printf("False");
}
}