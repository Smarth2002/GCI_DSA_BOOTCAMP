#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int k;

    for (int i = 1; i <= n; i++)
    {
        k=0;

        for (int j = 1; j<= 2*i-1; j++)
        {
            (j<=i)?k++:k--; 

            cout<<2*k-1;        
        }
        
        cout<<endl;
    }
    

    return 0;
}