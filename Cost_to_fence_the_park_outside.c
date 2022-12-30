#include<stdio.h>
int main()
{
    int l,b,w,c,cost,ar;
    scanf("%d%d%d%d",&l,&b,&w,&c);
    ar=((b+2*w)*(l+w*2))-(b*l);
    cost=c*ar;
    printf("%d",cost);
}