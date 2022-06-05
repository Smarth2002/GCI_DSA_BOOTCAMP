//https://www.youtube.com/redirect?event=video_description&redir_token=QUFFLUhqa3JoOXNsSjR4MTNkR0pwNlJlUXpmbzE2V19QQXxBQ3Jtc0trSWt2T3g5TXlTV1NPSDJfdnh2VnJMVjFhRk1Md0FmcDh0am93Um45dmU0cFV1MmFoOTJVTnFYNE5ZQXBuZTRyTTFZb1htc1RNNjhfN0NtRS1oN1RBd3Z6VmdXeGlPM1ZwcWNxVElnREprN1k4WVU2NA&q=https%3A%2F%2Fwww.geeksforgeeks.org%2Fpermute-string-changing-case%2F

#include<bits/stdc++.h>
using namespace std;

void permutations(string ip, string op)
{
    if(ip == "")
    {
        cout<<op<<endl;
        return;
    }

    string op1=op;
    string op2=op;

    op1.push_back(ip[0]);
    op2.push_back(ip[0]-32);

    ip.erase(ip.begin()+0);

    permutations(ip, op1);
    permutations(ip, op2);

    return;
}

int main()
{
    string ip="abc";
    string op="";

    permutations(ip, op);

    return 0;
}