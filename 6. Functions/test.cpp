#include<iostream>
using namespace std;


int main(int argc, char *argv[])
{   int YYYY,MM,DD;
    cout<<"Enter your date of birth:"<<endl;
    cin>>YYYY>>MM>>DD;
    cout<<"Enter today's date"<<endl;
    int YYYYY,MMM,DDD;
    cin>>YYYYY>>MMM>>DDD;
    
 
    
   
    
    
    
    //if(MM==MMM)
    if (MM==MMM && (DDD>=DD)){cout<<"age in years:"<<YYYYY-YYYY<<endl;
    cout<<"Age in Months is:"<<((YYYYY-YYYY)*12)<<endl;}
    else if(MM<MMM){cout<<"age in years: "<<YYYYY-YYYY-1<<endl;
    cout<<"Age in Months is:"<<((YYYYY-YYYY)*12)-MM+MMM<<endl;}
    
    
    
    
    
    
    return 0;
}									
