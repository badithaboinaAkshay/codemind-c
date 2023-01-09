#include<stdio.h>
int p(int num)//
{
	int i,c=0;
	for(i=1;i<=num;i++)
	{
		if(num%i==0)
		{
			c++;	
		}	
	}
	if(c==2)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	
}
int main()
{
    int n1,n2,n3,vk,s;
    scanf("%d%d",&n1,&n2);
    s=n1+n2;
    for(vk=s+1;;vk++)
    {
        if(p(vk))
        {
            break;
        }
    }
    printf("%d",vk-s);
}

