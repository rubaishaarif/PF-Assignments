#include<stdio.h>
int main(void)
{
	int A,B;
	printf("Enter two numbers: \n");
	scanf("%d %d",&A,&B);
	printf("%d\n", A);
	printf("%d\n", B);
	A=A+B;
	B=A-B;
	A=A-B;
	printf("After Swaping: \n");
	printf("A=%d\n", A);

	printf("B=%d", B);
	
	}
