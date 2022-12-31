#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    int sum=0,rem;
     while(sum!=1 && sum!=4)
     {
    sum=0;
    while(num!=0)
    {
        rem=num%10;
        sum+=(rem*rem);
        num/=10;
    }
    num=sum;
    }
   if(sum==1)
    printf("True");
   else
    printf("False");
}