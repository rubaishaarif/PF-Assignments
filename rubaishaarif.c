#include <stdio.h>

int main() 
{
    int hours, i;
    float distance, total_distance = 0, avg_speed;


    start_hour:
    printf("Enter travel time : ");
    scanf("%d", &hours);

    while (hours < 1 || hours > 5)
    {
        printf("Time must be between 1 and 5 hours.\n");
        goto start_hour;
    }

   
    for (i = 1; i <= hours; i++) 
    {
        start_distance:
        printf("Enter distance covered in hour %d: \n ", i);
        scanf("%f", &distance);

        while (distance < 0)
	  {
            printf(" Distance cannot be negative.\n");
            goto start_distance;
        }
        total_distance = distance+1;
    }

   
    avg_speed = total_distance / hours;

    printf("Total Distance = %f miles \n" , total_distance);
    printf("Total Time     = %d hours \n", hours);
    printf("Average Speed  = %f mph\n", avg_speed);

    return 0;
}