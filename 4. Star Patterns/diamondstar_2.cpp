#include<iostream>
using namespace std;

int main()
{
    int rows;
    cin>>rows;

    int k=0,n=(rows+1)/2;     //n is the middle row and k is used instead of i

    for (int i = 1; i <= rows; i++)
    {
        if(rows%2==0)
        {
            if(i<=n)
                k++;       //here n and n+1 are middle rows so same values of k in both are needed and after n+1 decrementation  
            else if(i>n+1)
                k--;
        }
        else
        {
            (i<=n)?k++:k--;   //upto n incrementation is there and then decrementation ..and this k is used in place of i to print stars in lower half pattern just like upper half pattern as lower half values of j satsify conditions just like upper half values for same i so k is made same as upper half values i
        }
        
        
        for (int j = 1; j <= rows; j++)
        {
            if(j>=n+1-k && j<=n-1+k)   //conditions will not satisfy if rows taken instead of n to define condition
                cout<<"*";
            else    
                cout<<" ";
            
        }

        cout<<endl;
        
    }

    return 0;
    
}