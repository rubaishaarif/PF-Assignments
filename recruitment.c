#include<stdio.h>
void position();
int main()
{
    position();
    return 0;
}
void position()
{
    int marks, experience;
    printf("enter marks : ");
    scanf("%d",&marks);
    printf("\nenter no of years experiece : ");
    scanf(" %d",&experience);
    if(marks>=70 && experience>=2)
       {
        printf("\nyou are selected for the post of for the post of Associate Developer "); 
       }
       else if(marks>=60 && experience>=1)
       {
       printf("\nyou are selected for the post of for the post of Assistant Developer "); 
       }
      else if(marks>=50 )
    {
       printf("\nyou are selected for the post of for the post of Trainee Engineer "); }
     else
       {
           printf("\nsorry! You are not selected");
       }  }