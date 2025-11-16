#include <stdio.h>
void swaped(int *aPtr, int *bPtr, int *cPtr);

int main() {
int a=10,b=20,c=30;
swaped(&a,&b,&c);
printf("a= %d\n",a);
printf("b= %d\n",b);
printf("c= %d\n",c);
    return 0;
}
void swaped(int *aPtr, int *bPtr, int *cPtr)
{
 int temp = *aPtr;   

    *aPtr = *bPtr;     
    *bPtr = *cPtr;     
    *cPtr = temp; }