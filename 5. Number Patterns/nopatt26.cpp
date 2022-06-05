#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int k=1,val=1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= k; j++)
        {
            if(val==10)
                val=1;

            cout<<val;

            val++;
                      
        }
        
        k*=2;

        cout<<endl;
    }
    
    return 0;
}