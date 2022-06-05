//https://www.hackerearth.com/practice/algorithms/searching/linear-search/practice-problems/algorithm/rest-in-peace-21-1/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while (t--)
    {
        long int no;
        cin>>no;

        if(no == 21)        
            cout<<"The streak is broken!"<<endl;
        
        else if(no >= 100)
        {
            if(no % 21 == 0)
                cout<<"The streak is broken!"<<endl;
            else
            {
                int copy1=no;

                while(copy1 >= 10)
                {
                    if(copy1 % 100 == 21)
                        break;                
                    
                    copy1/=10;
                }

                if(copy1 >= 10)
                    cout<<"The streak is broken!"<<endl;
                else
                    cout<<"The streak lives still in our heart!"<<endl;
            }
        }
        else
            cout<<"The streak lives still in our heart!"<<endl;
    }
    
    return 0;
}