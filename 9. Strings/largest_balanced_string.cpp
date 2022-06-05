//https://www.hackerearth.com/practice/algorithms/string-algorithm/basics-of-string-manipulation/practice-problems/algorithm/largest-balanced-string-bf93ce85/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        string str;
        cin>>str;

/*string only contains either (, ), {, }, [, ]
so string is balanced if no of ( = no of ), [=], {= }
so find freq of all these char and compare it

but to compare and store freq of all values simulaneously make an array of freq[6] bcz only 6 type of char
can be there in string*/

        int freq[6]={}; 

        for (int i = 0; i < str.size(); i++) 
        {
            if( str[i] == '(' )
                freq[0]++;
            else if ( str[i] == ')' )
                freq[1]++;
            else if ( str[i] == '[' )
                freq[2]++;
            else if ( str[i] == ']' )
                freq[3]++;
            else if ( str[i] == '{' )
                freq[4]++;
            else
                freq[5]++;
        }

/*assuming complete string is balanced 
so if there is difference in freq than that diff of char is wasted and not included in balanced string 
so reduce them from lengh

alternatively
int ans=0
ans += 2*min( '(', ')' )
ans += 2*min( '[', ']' )
ans += 2*min( '{', '}' )
bcz min no require same min no of elemens to pair out of max elements in abundance*/
        
        int length=str.size(); 
        length = length - ( abs(freq[0] - freq[1]) + abs(freq[2] - freq[3]) + abs(freq[4] - freq[5]) );

        cout<<length<<endl;
    }

    return 0;
}