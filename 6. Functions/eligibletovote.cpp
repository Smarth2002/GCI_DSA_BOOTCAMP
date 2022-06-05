/*A person is elligible to vote if his/her age is greater than or equal to 18. 
Define a function to find out if he/she is elligible to vote.*/

#include<iostream>
using namespace std;

void eligible(int age)
{
    if(age<1 || age>120)
        cout<<"invalid input";
    else if(age>=18)
        cout<<"eligible to vote";
    else
        cout<<"not eligible to vote";
    
    return;
}

int main()
{
    int age;
    cin>>age;

    eligible(age);

    return 0;
}