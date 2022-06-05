/*Define a function to calculate power of a number raised to other i.e. ab 
 where the numbers 'a' and 'b' are to be entered by the user*/

#include<iostream>
using namespace std;

int pow(int a, int b)
{
    int power=1;

    for (int i = 1; i <= b; i++)
    {
        power*=a;
    }
    
    return power;

}

int main()
{
    int a,b;
    cin>>a>>b;

    cout<<pow(a,b);

    return 0;
}