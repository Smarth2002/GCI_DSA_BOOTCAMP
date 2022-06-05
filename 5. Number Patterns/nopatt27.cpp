#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int no=1;

    for (int i = 1; i <= n; i++)
    {
        no=i;

        for (int j = 1; j <= i; j++)
        {
            cout<<no;
            no=no+n-j;
        }
        
        cout<<endl;
    }
    
    return 0;
}