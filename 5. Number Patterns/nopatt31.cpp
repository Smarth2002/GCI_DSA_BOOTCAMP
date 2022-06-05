#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int digits=log10(n)+1;

    while (n>0)
    {
        cout<<n;
        n = n % (int) round( pow(10,digits-1) );
        digits--;

        cout<<endl;
    }
    
    return 0;
}