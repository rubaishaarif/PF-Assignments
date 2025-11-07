#include<stdio.h>
#include<string.h>
float getData(int h, int a);
float volumeCal(int h, int a );

int main()
{ int height, width;
    getData(height, width);
    return 0;
}
   
float getData(int h, int a)
{
printf("enter height: ");
scanf("%d",&h);
printf("\nenter width: ");
scanf(" %d",&a);
float volume=volumeCal(h,a);
printf("the volume is %f",volume);
return volume;
}
float volumeCal(int h, int a )
{
    float v;
    v=((a*a)*((1.0/3.0)*h));
    return v;
}
