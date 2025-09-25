#include <stdio.h>

int main()
{
   char enter;
   printf("Enter any character\n");
   scanf("%c", &enter);
   if(enter>='A' && enter<='Z')
   {
       printf("%c is capital",enter );
   }
   else if(enter>='a' && enter<='z')
   {
       printf("%c is small",enter );
   }
   else if(enter>='0' && enter<='9')
   {
       printf("%c is digit",enter );
   }
   else
   {
       printf(" %c is special character", enter);
   }
    return 0;

}