#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int a;
    int* p=&a;
    cout<<p<<endl<<*p<<endl;
    cin>>*p;
    cout<<*p;

    return 0;
}