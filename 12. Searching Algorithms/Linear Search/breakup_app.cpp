//https://www.hackerearth.com/practice/algorithms/searching/linear-search/practice-problems/algorithm/breakup-app/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int weight[31]={}; //to store weightage of each no that can be present (1-31)
    string str;

    while (n--)
    {
        str="";

        getline(cin, str);

        for (int i = 0; i < str.size(); i++)
        {
            if(str[i] >= '1' && str[i] <= '9' && str[i+1] >= '0' && str[i+1] <= '9')   //if 2 digit no 
            {
                int no=(str[i]-48)*10 + (str[i+1]-48); //to convert char to int (str[i]-48) and 2 digit no so 1*10+9=19
//each indix in weight[] represent date=index+1
                if(str[0] == 'G')                               
                    weight[no-1]+=2; //for girlfriend weightage is twice
                
                else                
                    weight[no-1]+=1;                
            }

            else if(str[i] >= '1' && str[i] <= '9' && str[i+1] == ' ' && str[i-1] == ' ') //for single digit no
            {
                if(str[0] == 'G')
                    weight[str[i]-48-1]+=2;
                else                
                    weight[str[i]-48-1]+=1;
            }
        }
    }

    int max=0, max_index=0;

    for (int i = 0; i < 31; i++) //searching max weightage and its date index
    {
        if(weight[i] > max)
        {
            max=weight[i];
            max_index=i;
        }
    }

    int count=0;

    for (int i = 0; i < 31; i++) //checking if multiple dates have same max weightage than print no date
    {
        if(weight[i] == max)
        {
            count++;
        }

        if(count >= 2)
        {
            cout<<"No Date";
            return 0;
        }
    }

    if( (max_index+1 == 19 || max_index+1 == 20)) //otherwise if max weightage is of date 12 or 20 then date
        cout<<"Date";
    else
        cout<<"No Date"; //otherwise no date
        
               
    return 0;
}