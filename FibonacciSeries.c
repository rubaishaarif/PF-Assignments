#include <stdio.h>

int main()
{
int sum=0, a=0, b=1,l=1000,c;
printf("print fibonacci series utp 1000 \n");

while(a<1000)
{
    printf("%d \n",a);
    
    if((a%7==0) && (a%3==0) && (a%5==0))
{
    sum=sum+a;
}
    c=a+b;
    a=b;
    b=c;
}
printf("sum of the generated Fibonacci numbers divisible by 3, 5 and 7 only is %d",sum);

    return 0;
}