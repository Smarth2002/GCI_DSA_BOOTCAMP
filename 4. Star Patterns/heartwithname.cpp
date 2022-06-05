#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for (int i = n/2; i <= n; i+=2)
    {
        for (int j = 1; j < n-i; j+=2)
            cout<<" ";
        
        for (int j = 1; j <= i; j++)
            cout<<"*";
        
        for (int j = 1; j <= n-i; j++)
            cout<<" ";
        
        for (int j = 1; j <= i; j++)
            cout<<"*";

        cout<<endl;       
    }

    for (int i = 1; i <= n; i++)
    {
        if(i==1)
        {
            for (int j = 1; j <= n-5; j++)  //total columns - columns taken by "codeforwin" = total stars and on dividing by 2 stars in first half (2*n-10)/2 
            {
                cout<<"*";
            }

            cout<<"Jyotikumar"; //printing name

            for (int j = n+6; j <= 2*n-1; j++) //so till (n-5) left side stars and 10 codeforwin so remaining=2*n-1-(n-5)-10=n-6..so from 1 to n-6 ..or stars and codeforwin are till n-5+10=n+5 so from n+6 to 2*n-1..in both ways stars can be printed
            {
                cout<<"*";
            }
            
        }

        else
        {
            for (int j = 1; j <= 2*n-1; j++)
            {
                if(j>=i && j<=2*n-i)
                    cout<<"*";
                else
                    cout<<" ";
            }
            
        }

        cout<<endl;
        
    }
    
    return 0;
    
}