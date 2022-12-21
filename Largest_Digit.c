#include<stdio.h>
int main()
{
    int N,i,large=0,r;
    scanf("%d",&N);
    for(i=1;N>i;i++)
    {
        r=N%10;
        N=N/10;
        if(large<r)
        {
            large=r;
        }
    }
    printf("%d",large);
    return 0;
    
}

