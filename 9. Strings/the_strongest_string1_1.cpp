#include<bits/stdc++.h>
using namespace std;

int main()
{
    int size;
    cin>>size;

    string str;
    cin>>str;

    int start=0, max_pos;
    char max;
    string ans="";

    int freq[26]={};

/* we need greatest char of string to start from and find the next greatest char present at position greater 
than prev greatest element 
so we first keep start=0 and find greatest element and append it and set the start to its position
and find next greatest element bw start to end 
and simultaneously check their frequencies so that repeated elements are not stored in max
we repeat the process until start == size */

    while (start < str.size())
    {
/* set max and max_pos every time so that if there is only repeated element left than max and max_pos will 
not be updated and will contain same previous element that will be appended
therefore we set it every time so that after loop if max_pos=-1 than all elements left are repeated
and we stop finding more elements and  break the loop */

        max='A'; //just a value to compare as all lowercase letters are greater than 'A'
        max_pos=-1;  

        for (int i = start; i < str.size(); i++) //search for greatest btw start-end and find pos and element
        {
            if(str[i] > max && freq[str[i]-'a'] == 0) 
            {
                max=str[i];
                max_pos=i;
            }
        }

        if(max_pos == -1) //if all elements left are repeated
            break;
        
        ans+=max; // insert
        freq[max - 'a']++;   //increase freq
        start=max_pos+1; //set the start to find other elements after this position                                        
    }
    
    cout<<ans<<endl;

    return 0;
}