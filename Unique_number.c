#include<stdio.h>
int main()
{
    int n,d,x[100],j,k,i=0,c=0,s=0;
    scanf("%d",&n);
    while(n!=0)
    {
        d=n%10;
        x[i]=d;
        n=n/10;
        i++;
    }
    for(j=0;j<i;j++)
    {

        for(k=0;k<i;k++)
        {
                if(x[j]==x[k])
                {
                    c++;
                
                }
        }
    }
    if(c==i)
    {
        printf("Unique Number");
    }
    else
    {
        printf("Not Unique Number");
    }
}