/*Write a function that takes your date of birth in YYYY, MM and DD format (separated by spaces) as input 
as well as the current date, in same format, and calculates your age in years, months and days. 
You must check for leap years also. Write a separate function to check for leap year.*/

#include<iostream>
using namespace std;

void age(void)
{
    int YYYY,MM,DD,currYYYY,currMM,currDD;
    int years,months,days;

    cout<<"enter DOB in yyyy,mm,dd: ";
    cin>>YYYY>>MM>>DD;

    cout<<"enter current date in yyyy,mm,dd: ";
    cin>>currYYYY>>currMM>>currDD;

    if(currMM>MM)                  //it means the years are complete and instead more months are to be added
        years=currYYYY-YYYY;
    else
        years=currYYYY-YYYY-1;     //it means years are not complete and shorter by months and months are to be subtracted so we reduce 1 year and find months to add
    
    if(currMM>MM)
        months=currMM-MM;          //no of extra months 
    else
        months=12-MM+currMM;       //it means from MM(month of dob) to 12 and then from 1 to currMM(current month) to add months in years

    if(currDD<DD)
    {
        months-=1;                //it means months are not complete and shorter by days so we simply subtract one month and find remaining days
        days=30-(DD-currDD);      //no of days to add ...1 month was shorter by (DD-currDD) days
    }
    else
        days=currDD-DD;           //no of extra days

    
    cout<<"age is "<<years<<" years "<<months<<" months "<<days<<" days";
}

void leapYr(void)
{
    int yr;
    cout<<"enter the year to check whether its leap year or not: ";
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

    return 0;
}