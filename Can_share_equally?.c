#include<stdio.h>
int main()
{int x,y,total;
scanf("%d%d",&x,&y);
total=(1*x)+(2*y);
if(x==0&&y%2==0)
{
    printf("YES");
    
}
else if(x==0&&y%2!=0)
{
    printf("NO");
    
}
else if(total%2==0)
{
    printf("YES");
    
}
else{printf("NO");
    
}
    
}