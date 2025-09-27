#include <stdio.h>

int main() 
{
    float NTSScore, FScScore;
    float FScpercent, NTSpercent;
    printf("Enter NTS and F.Sc marks \n");
    scanf("%f",&NTSScore);
    scanf("%f",&FScScore);
    printf(" NTS marks= %f \n", NTSScore);
    printf(" FSc marks= %f \n", FScScore);
    
    FScpercent=(FScScore/1100.0)*100;
    NTSpercent=(NTSScore/100.0)*100;
     printf("FScpercent = %f %% \n", FScpercent);
    printf(" NTSpercent= %f %% \n",NTSpercent);
    
    if(FScpercent>70)
    {
        if(NTSpercent>=70)
           { printf("You are allocated a seat in IT dept of OXFORD \n");}
           else if(NTSpercent>=60)
            { printf("You are allocated a seat in ELECTRONICS dept of OXFORD \n");}
            else if( NTSpercent>=50)
             { printf("You are allocated a seat in TELECOMMUNICATION dept of OXFORD \n");}
              else
       {printf("No dept allocated in OXFORD \n");}  
    }
 else if(NTSpercent>=50)
 {
     if(FScpercent<=70 && FScpercent>=60)
      {printf("You are allocated a seat in IT dept ofMIT \n");}
      else if(FScpercent<=59 && FScpercent>=50)
       {printf("You are allocated a seat in CHEMICAL dept ofMIT \n");}
       else if(FScpercent>40 && FScpercent<50)
       { printf("You are allocated a seat in COMPUTER dept ofMIT \n");}
       else
       {printf("No dept allocated in MIT \n");}
 }
 else
 {printf("No dept allocated \n");}
 return 0;
}
     
    