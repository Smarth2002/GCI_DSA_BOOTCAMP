#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int no=1;
    int add_val=0;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            no+=add_val;
            cout<<no<<" ";
            add_val++;
        }
        
        cout<<endl;
    }
    
    return 0;
}