#include <stdio.h>

int main()
{
    char user_input;
    printf("Are you sure to delete [Y/y] / [N/n] ? \n");
    scanf("%c", &user_input);

switch(user_input)
{
    case 'Y':
    case'y': printf("Deleted successfully. \n"); break;
    case 'N':
    case'n': printf("Delete cancelled. \n"); break;
    default:printf("Choose the right option. \n");
}
   return 0;
}