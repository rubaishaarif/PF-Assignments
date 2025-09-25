#include <stdio.h>

int main()
{
    int amount;
    float saved_amount, discounted_amount;
    printf("Enter amount\n");
    scanf("%d", &amount);
    if(amount>=2000 && amount <=4000)
    {
       saved_amount=amount*0.2;
        discounted_amount=amount - saved_amount ;
      
        printf("your original amount = %d \n Amount saved= %f \n Amount payed after discount= %f\n", amount, saved_amount, discounted_amount);

    }
    else if(amount>4000 && amount <=6000)
    {
       saved_amount=amount*0.3;
        discounted_amount=amount - saved_amount;
      
        printf("your original amount = %d \n Amount saved= %f \n Amount payed after discount= %f\n", amount, saved_amount, discounted_amount);
    }
    else if (amount>6000)
    {
       saved_amount=amount*0.5;
        discounted_amount=amount - saved_amount;
      
        printf("your original amount = %d \n Amount saved= %f \n Amount payed after discount= %f\n", amount, saved_amount, discounted_amount);
    }
    else
    {
    printf("No discount for amount below 2000\n"); }
    return 0;

}