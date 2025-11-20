#include <stdio.h>
struct phone{
    int areacode;
    int exchange;
    int num;
};
int main() {
struct phone p1; 
struct phone p2;
p1.areacode = 212;
p1.exchange = 767;
p1.num = 8900;

printf("Enter area code : ");
scanf("%d",&p2.areacode);
printf("Enter exchange : ");
scanf("%d",&p2.exchange);
printf("Enter num : ");
scanf("%d",&p2.num);

printf("My number is (%d)%d-%d\n",p1.areacode,p1.exchange,p1.num);
printf("Your number is (%d)%d-%d\n",p2.areacode,p2.exchange,p2.num);
    return 0;
}