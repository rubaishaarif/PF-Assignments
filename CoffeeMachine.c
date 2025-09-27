#include <stdio.h>

int main() 
{
    char type, cup_size, manual;
    int total_time;
    printf("\tCOFFEE MACHINE\t\n");
    printf("Input the type of coffee as B for Black and W for White. \n");
    printf("cup size is double(D) or small(S) ? \n");
    printf("Is the coffee manual (Y/N) ? \n");
    
    scanf("%c %c %c",&type,&cup_size,&manual);
    printf("type of coffee is : %c \n",type);
    printf("Cup size is : %c \n",cup_size);
    printf("Manual? : %c \n",manual);
    
    switch(type)
    {
    case'B': 
	printf("\tPreparing Black Coffee\t\n");
    printf("1. Put Water: 20 mins\n");
    printf("2. Add Sugar: 20 mins\n");
    printf("3. Mix Well: 25 mins\n");
    printf("4. Add Coffee: 15 mins\n");
    printf("5. Mix Well: 25 mins\n");
    
    	total_time=(20+20+25+15+25);
    	
    if(manual=='Y')
{
    	printf("Manual mode is ON \n");
}
else
{
("Manual mode is OFF \n");

}
    if(cup_size=='D')
    {
    	total_time=(20+20+25+15+25);
    	printf("total coffee time= %d \n", total_time*2);
	}
	else
	{
			printf("total coffee time= %d \n", total_time);
	}

	break;
    
case'W': printf("\tPreparing White Coffee\t\n");
    printf("1. Put Water: 15 mins\n");
    printf("2. Add Sugar: 15 mins\n");
    printf("3. Mix Well: 20 mins\n");
    printf("4. Add Coffee: 2 mins\n");
    printf("5. Add Milk: 4 mins\n");
    printf("6. Mix Well: 20 mins\n");
    	total_time=(15+15+20+2+4+20);
    if(manual=='Y')
{
    printf("Manual mode is ON \n");
}
else
{
	("Manual mode is OFF \n");
}
	
    if(cup_size=='D')
    {
    	
    	printf("total coffee time= %d mins \n", total_time*2);
	}
	else
	{
			printf("total coffee time= %d mins \n", total_time);
	}

	break;
	 
}	
return 0;
}