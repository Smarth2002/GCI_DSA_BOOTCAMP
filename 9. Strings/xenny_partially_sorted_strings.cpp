#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while (t--)
    {
        int no, position, limit;
        cin>>no>>position>>limit;

        string str="", substr="";

        for(int i=1; i <= no; i++)
        {
            string str1;
            cin>>str1;
            substr+=str1.substr(0, limit);
            str+=str1;
        }
        
        int position_array[no]={}, rank=1;

        for (int i = 0; i < limit; i++)
        {
            int min=substr[i];
            int min_index=i;

            for (int j = i; j < substr.size(); j=j+limit)
            {
                if(substr[j] < min && position_array[j/no] == 0)
                {
                    min=substr[j];
                    min_index=j;
                }
            }     

            
            cout<<min_index<<endl;
            position_array[min_index/limit]=rank;
            rank++;       
        }
        
        for (int i = 0; i < no; i++)
        {
            if(position_array[i] == position)
            {
                cout<<substr.substr(i*(str.size()/no), str.size()/no)<<endl;
                break;
            }
        }
        
    }
    
    return 0;
}