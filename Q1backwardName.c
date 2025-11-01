#include<stdio.h>
#include<string.h>
int main()
{
    char Fname[20],Lname[20];
    char Fullname[40], backward[40];
    int lenF,lenL,lenR;
    int f,l,i; //for loop
    printf("enter first name : ");
    scanf("%s",Fname);
    printf("enter last name : ");
    scanf("%s",Lname);
    lenF=strlen(Fname);
    lenL=strlen(Lname);
    for(f=0;f<lenF;f++)
    {
        Fullname[f]=Fname[f];
    }
    for(l=0;l<lenL;l++)
    {
        Fullname[f+l]=Lname[l];
    }
    Fullname[lenF+lenL]='\0';
    printf("\n full name is %s\n" ,Fullname);
    lenR=strlen(Fullname);
    for(i=0;i<lenR;i++)
    {
        backward[i]=Fullname[lenR-1-i];
    }
    backward[lenR]='\0';
printf("backward = %s",backward);
return 0;
}
    