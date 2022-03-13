/*A shop will give discount of 10% if the cost of purchased quantity is more than 1000.
Ask user for quantity
Suppose, one unit will cost 100.
Judge and print total cost for user.*/

#include<iostream>
using namespace std;

int main()
{
    int qty,price;
    cin>>qty;

    price=100*qty;

    if(price>1000)
        cout<<"effective price is: "<<price-price/10;
    else
        cout<<"effective price is: "<<price;

    return 0;
    
}