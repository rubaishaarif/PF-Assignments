

#include <stdio.h>

int main(void) 
{
    float salary,tax,applicable_tax,total_salary;
    printf("Enter tax : \n");
    scanf("%f", &tax);
    
    printf("Enter salary : \n");
    scanf("%f", &salary);
    
    applicable_tax=tax*salary;
    total_salary =salary - applicable_tax;
    
    printf(" salary : %f \n",salary );
    printf(" tax : %f\n",tax );
    printf(" applicable tax : %f \n",applicable_tax );
    printf(" the total salary : %f \n",total_salary);
    return 0;
}
      
        


	
