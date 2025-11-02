#include <stdio.h>
int main() 
{
    char string1[20],string2[20];
    int i=0;
    printf("enter first string : ");
    scanf("%[^\n]",string1);
    printf("enter second string : ");
    scanf(" %[^\n]",string2);


while(string1[i]!='\0' && string2[i]!='\0')
{
    if(string1[i]!=string2[i])
    { 
        break;
    }
    i++;
}
if(string1[i]==string2[i])
{
    printf("\nstring1 = %s and string2 = %s are equal",string1,string2);
}
else if(string1[i]>string2[i])
{
    printf("\nstring1 = %s is greater",string1);
}
else
{
    printf("\nstring2 = %s is greater",string2);
}
    return 0;
}