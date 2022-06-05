//https://www.hackerearth.com/practice/algorithms/string-algorithm/basics-of-string-manipulation/practice-problems/algorithm/marut-and-strings-4/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    if(t >= 1 && t <= 10)
    {
        while (t--)
        {
            string str;
            cin>>str;

/*to store no of uppercase and lowercase alphabets as no of lowercase=no of lowercase operations and 
no of uppercase letters = no of uppercase operations so we have to tell min operations
(min out of upper and lower case alphabets) */
            int alpha_case[2]={}; 

            if(str.size() >= 1 && str.size() <= 100)
            {
                for (int i = 0; i < str.size(); i++)
                {
                    if(str[i] >= 'a' && str[i] <= 'z') //counting both uppercase aand lowercase letters
                        alpha_case[0]++;
                    else if(str[i] >= 'A' && str[i] <= 'Z')
                        alpha_case[1]++;
                }
                
                if(alpha_case[0] == 0 && alpha_case[1] == 0) //it means no uppercase and lowercase letters are there so invalid input
                    cout<<"Invalid Input"<<endl;
                else
                {
                    if(alpha_case[0] < alpha_case[1]) //min operations
                        cout<<alpha_case[0]<<endl;
                    else
                        cout<<alpha_case[1]<<endl;
                }
            }
            else
                cout<<"Invalid Input"<<endl;
        }
    }   
    else
        cout<<"Invalid Test"<<endl;

    return 0;
}