#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int k=0;
    int no;

    for (int i = 1; i <= 2*n-1; i++)
    {
        (i<=n)?k++:k--;
        no=1;

        for (int j = 1; j <= 2*k-1; j++)
        {
            cout<<no;

            (j<i)?no++:no--;
        }
        
        cout<<endl;
    }
    
    return 0;
}