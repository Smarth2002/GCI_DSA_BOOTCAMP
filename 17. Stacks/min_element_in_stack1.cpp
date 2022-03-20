#include<bits/stdc++.h>
using namespace std;

stack<int> s;
stack<int> ss;

void push(int ele)
{
    s.push(ele);

    if(ss.empty())
        ss.push(ele);
    else if(!ss.empty() && ele < ss.top())
        ss.push(ele);
    
    return;
}

int pop()
{
    if(s.empty() && ss.empty())
    {
        cout<<"error"<<endl;
        return -1;
    }
    int topEle=s.top();

    if(s.top() != ss.top())
        s.pop();
    else
    {
        s.pop();
        ss.pop();
    }

    return topEle;
}

int getMin()
{
    return ss.top();
}

int main()
{
    push(18);
    push(19);
    push(29);
    push(15);
    push(16);

    cout<<getMin();
    cout<<endl;

    cout<<pop();
    cout<<endl;
    cout<<pop();
    cout<<endl;
    cout<<getMin();
    cout<<endl;
    cout<<pop();
    cout<<endl;
    cout<<getMin();

    return 0;
}