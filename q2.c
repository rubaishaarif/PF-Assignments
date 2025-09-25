#include <stdio.h>
#include<math.h>
int main()
{
int a, b, c;
float D, x, x1, x2, x1R, x2R,x1I, x2I;
printf(" enter values of a, b, c\n");
scanf("%d%d%d",&a,&b,&c);
D=pow(b,2.0)-4*a*c;
if(D>0)
{
printf("D is positive :\n");
x1= (-b+sqrt(D))/2*a;
x2= (-b-sqrt(D))/2*a;
printf(" 1st root = %f , \n 2nd root= %f", x1,x2);
}
else if(D==0)
{
    printf(" D is 0 \n");
    x=-b/2*a;
    printf(" root = %f", x);
}
else
{
x1R=-b/2*a;
x2R=-b/2*a;
x1I= sqrt(-D);
x2I= sqrt(-D);
printf(" 1st root (real part)= %f, \n 1st root (imag part)= %f \n",x1R,x1I);
printf(" 2nd root (real part)= %fi, \n 2nd root (imag part)= -%fi",x2R,x2I);
}
return 0;
}