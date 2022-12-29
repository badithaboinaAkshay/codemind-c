#include<stdio.h>
int main()
{
    int n,d,p=1,i,s=0;
    scanf("%d",&n);
    int t=n;
    while(n)
    {
        p=1;
        d=n%10;
        n=n/10;
        for(i=d;i>0;i--)
        {
            p=p*i;
        }
        s=s+p;
    }
    if(s==t)
    {
        printf("The number %d is a strong number",t);
    }
    else
    printf("The number %d is not a strong number",t);
}

