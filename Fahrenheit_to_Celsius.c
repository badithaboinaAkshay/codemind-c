#include<stdio.h>
int main()
{
    float c,f;
    scanf("%f%f",&f,&c);
    c=(5*(f-32))/9;
    printf("%.2f",c);
}