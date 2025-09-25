#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main() 
{
    int num, last_digit, rest, new_num;
    printf("Enter a number: \n");
    scanf("%d", &num);

  

    while (abs(num) > 5)
	{  
        last_digit = num % 10;  
        rest = num / 10;       
        new_num = rest - 2 * last_digit;

        printf("%d -> %d - %d = %d\n", num, rest, 2*last_digit, new_num);

        num = new_num; 
    }

  
    if (num == 0 || num == 7 || num == -7)
        printf("The number is divisible by 7\n");
    else
        printf("The number is not divisible by 7\n");

    return 0;
}