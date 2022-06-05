#include<iostream>
using namespace std;

void age(void)
{
    int YYYY,MM,DD;
    int currYYYY,currMM,currDD;

    int years,months;

    cout<<"enter DOB in YYYY, MM, DD format: "<<endl;
    cin>>YYYY>>MM>>DD;
    cout<<"enter current date in YYYY, MM, DD format: "<<endl;
    cin>>currYYYY>>currMM>>currDD;

    if(currMM>MM)                //years are complete
        years=currYYYY-YYYY;
    else
        years=currYYYY-YYYY-1;   //years are not complete and shorter by (MM-currMM) months
    
    if(currMM>MM)
        months=12*years+ (currMM-MM); //converted years to months and more months are simply added
    else
        months = 12*years + 12-MM + currMM; //converted years to months and add remaining months
    
    if(currDD<DD)
        months-=1; //it means months are not complete and are shorter by days..so reeduce 1 month
    
    cout<<"age (in years) : "<<years<<endl;
    cout<<"age (in months) : "<<months<<endl;

    return;

}

void leap_Year()
{
    int yr;
    cout<<"enter year to check whether its leap year or not: ";
    cin>>yr;

    if(yr%100==0)
        if(yr%400==0)
            cout<<"leap year";
        else
            cout<<"not leap year";
    else
        if(yr%4==0)
            cout<<"leap year";
        else
            cout<<"not leap year";

    return;
}

int main()
{
    age();
    leap_Year();

    return 0;
}