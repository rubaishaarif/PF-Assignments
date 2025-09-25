#include <stdio.h>

int main()
{
  float calories, calories_from_fat, fat_grams, percent_calories;
  printf("enter number of calories\n");
  scanf("%f", &calories);
   printf("enter fat grams in a food\n");
    scanf("%f", &fat_grams);
    calories_from_fat = fat_grams * 9;
    percent_calories = (calories_from_fat/calories)*100;
    printf("calories from fat are %f\n", calories_from_fat );
    printf(" percentage calories are %f\%\n",percent_calories );
if(percent_calories<30)
{
    printf("food is low in fat");
}
    return 0;

}