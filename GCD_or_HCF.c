#include<stdio.h>
int main()
{
    int n,m,max=0,i;
    scanf("%d%d",&n,&m);
    for(i=m;i;i--)
    {
        if(n%i==0&&m%i==0)
        {
            printf("%d",i);
            break;
        }
    }
}