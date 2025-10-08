#include <stdio.h>

int main()
{
    int sum=0,i,n,a;

    for(n=1;n<=1000;n++)
    {
        sum=0;
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
        sum=sum+i;
    }
    }
if(sum==n)
printf("%d \n",n);
}
    return 0;
}