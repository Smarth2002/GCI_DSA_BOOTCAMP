/*A company decided to give bonus of 5% to employee if his/her year of service is more than 5 years.
Ask user for their salary and year of service and print the net bonus amount.*/

#include<iostream>
using namespace std;

int main()
{
    float salary, yr_of_service;
    cin>>salary>>yr_of_service;

    if( yr_of_service>5 )
        cout<<"Effective Salary is: "<<salary+ (5*salary)/100;
    else
        cout<<"Effective Slary is: "<<salary;
    
    return 0;

}