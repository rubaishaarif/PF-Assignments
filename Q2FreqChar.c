#include<stdio.h>
#include<string.h>
int main()
{
    char name[20],course1[30],course2[30],result[80];

  char fch;
    int i,j,k;
    int lenname=0,len1=0,len2=0,lenR=0;
    int count,max=0; 
    printf("enter name : ");
    scanf("%s",name);
    printf("\n enter first course : ");
    scanf(" %[^\n]",course1);
    printf("\n enter second course : ");
    scanf(" %[^\n]",course2);
    lenname=strlen(name);
    len1=strlen(course1);
    len2=strlen(course2);
    for(i=0;i<lenname;i++)
    {
        result[i]=name[i];
    }
    for(j=0;j<len1;j++)
    {
        result[i+j]=course1[j];
    }
    for(k=0;k<len2;k++)
    {
        result[i+j+k]=course2[k];
    }
    result[lenname+len1+len2]='\0';
    lenR=strlen(result);
    printf("result = %s",result);
    for(i=0;i<lenR;i++)
    {
        count=0;
        for(j=0;j<lenR;j++)
        {
            if(result[i]==result[j])
            count++;
        }
        if(count>max)
       { max=count;
        fch=result[i]; }
    }
    printf("most frequent character is %c",fch);

    return 0;
}