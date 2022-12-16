#include<stdio.h>
int main()
{
    int x,a,b,c;
    scanf("%d%d%d",&x,&a,&b);
    c=(a*1)+(b*2);
    if(c%x==0) printf("Qualify");
    else printf("Not Qualify");
}