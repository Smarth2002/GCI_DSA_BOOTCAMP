#include<bits/stdc++.h>
using namespace std;

int main()
{
    int size;
    cin>>size;

    int A[size];

    for (int i = 0; i < size; i++)
    {
        cin>>A[i];        
    }
    
    sort(A, A+size);

    int distinct=1;

    for (int i = 1; i < size; i++)
    {
        if(A[i] != A[i-1])
            distinct++;
    }
    
    if(distinct == size)
        cout<<1;
    else if(distinct == 1)
        cout<< ( size*(size+1) )/2;
    else
    {
        for (int i = distinct; i <= size; i++)
        {
            for (int j = 0; j <= size-i; j++)
            {
                
                
            }
            

            
        }
        
    }
    

    return 0;
}