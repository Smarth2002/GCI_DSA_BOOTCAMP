/*3.
Take 20 integer inputs from user and print the following:
number of positive numbers
number of negative numbers
number of odd numbers
number of even numbers
number of*/

#include<iostream>
using namespace std;

int main()
{
    int size, pos=0, neg=0, odd=0, even=0, zeroes=0;
    cout<<"enter size of array: ";
    cin>>size;

    int array[size];

    cout<<"enter elements: "<<endl;

    for (int i = 0; i < size; i++)
    {
        cin>>array[i]; 

        if( array[i] == 0 )        
            zeroes++;
        
        else
        {
            if( array[i] > 0 )
                pos++;
            else
                neg++;
            
            if( array[i] % 2==0 )
                even++;
            else
                odd++;
        }        
    }

    cout<<"positive numbers: "<<pos<<endl<<"negative no's: "<<neg<<endl<<"even no's: "<<even<<endl
    <<"odd no's: "<<odd<<endl<<"zeroes : "<<zeroes;
    
    return 0;
}