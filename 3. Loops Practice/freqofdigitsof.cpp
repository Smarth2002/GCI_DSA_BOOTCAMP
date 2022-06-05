//Write a C program to find frequency of each digit in a given integer.

#include<iostream>
using namespace std;

int main()
{
    int no,num,digit,freq=0;
    cin>>num;

    for (int counter = 0; counter < 9; counter++)//checking freq of all the no's from 0 to 9 
    {
        no=num; //becz on checking freq of each no from 0 to 9 the no to be checked become 0 in each loop

        while (no!=0) //comparing with each digit of no to be checked
        {
            digit=no%10;

            if(digit==counter)
                freq++;
            
            no/=10;
        }

        cout<<"frequency of "<<counter<<": "<<freq<<endl;

        freq=0;
    }

    return 0;

}