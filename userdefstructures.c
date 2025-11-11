#include <stdio.h>
#include<string.h>
struct student
{
    char name[30];
    int rollno;  
    float cgpa;
}; //datatype defined

int main() {
struct student s1;
s1.cgpa=7.5;
s1.rollno=25067;
//s1.name="Raahim";
strcpy(s1.name, "Raahim");
//printing
printf("Name=%s\n",s1.name);
printf("Roll No=%d\n",s1.rollno);
printf("Cgpa=%f",s1.cgpa);
return 0;
}