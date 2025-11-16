#include <stdio.h>
void max(float arr[],int size);

int main()
{
    
    int len=10;
    
    float a[len];
    max(a,len);
    return 0;
}

void max(float arr[], int size)
{
	float *ptr=arr;
    float first=-1,second=-1;
    int i;
    
 printf("Enter elements of array:\n ");
  for(i=0;i<size;i++)
 {
 scanf(" %f",(ptr+i));
 if((ptr+i)<0)
 {
     printf("please enter a positive number\n");
     i--;
 }
 } 
 printf("The elements are : \n");
  for(i=0;i<size;i++)
 {
     printf("%.2f\t",*(ptr+i));
 }
   for(i=0;i<size;i++)
 {
     float t=*(ptr+i); 
     if(t>first)
     {
     second=first;
     first=t; 
     }
    else if(t > second && t < first)
        {
            second = t;
        }
 }
 printf("second highest number is %f",second);
}
