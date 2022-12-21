#include<stdio.h>
#include<math.h>
int main()
{
    int n,square;
    scanf("%d",&n);
    square=sqrt(n);
    if(n==square*square)
    printf("True");
    else
    printf("False");
    return 0;
}