#include<stdio.h>
int main()
{
    int a[5];
    for(int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    int count=0;
    for(int i=0;i<5;i++)
    {
        if(a[i]>=35)
        {
            count++;
        }
    }
    if(count==5)
    {
        printf("PASSED");
    }
    else
    {
        printf("FAILED");
    }
}