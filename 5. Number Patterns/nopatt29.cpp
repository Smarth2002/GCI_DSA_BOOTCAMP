#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int no=1;

    for (int i = 1; i <= n; i++)
    {
        if(i%2==0)
            no+=i;
        else
            no=no+i-1;

        for (int j = 1; j <= i; j++)
        {
            cout<<no;

            if(j<i)
            {
                if(i%2==0)
                    no--;
                else
                    no++;
            }

        }

        cout<<endl;
        
    }

    return 0;
    
}