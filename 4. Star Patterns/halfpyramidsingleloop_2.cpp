#include<iostream>
using namespace std;

int main()
{
    int rows;
    cin>>rows;

    int j=1;

    for (int i = 1; i <= rows;)
    {
        if(j<=i)
        {
            cout<<"*";
            j++;
            continue;  //again enter loop keeping i(row no) same 
        }

        else
        {
            cout<<endl;
            i++; //increasing row no
            j=1; //resetting column no
        }
        
    }

    return 0;
    
}