#include<bits/stdc++.h>
using namespace std;

int main()
{
    int array[] = {10, 12, 20, 30, 25, 40, 32, 31, 35, 50, 60};

    for (int i = 3; i <= 8; i++)
    {
        for (int j = 3; j <= 11-i; j++)
        {
            for (int k = j; k <= j+i-3; k++)
            {
                cout<<array[k]<<", ";
            }
            
            cout<<endl;
        }
        
    }

    return 0;
    
}