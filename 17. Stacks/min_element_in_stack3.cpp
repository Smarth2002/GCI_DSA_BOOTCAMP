#include<bits/stdc++.h>
using namespace std;

stack<int> s;

int minEle;

void push(int ele)
{
    if(s.empty())
    {
        minEle=ele;
        s.push(ele);
        return;
    }
    
    if(ele <= minEle)
    {
        s.push(ele-minEle);
        minEle=ele;       
    }
    else    
        s.push(ele);
    
    return;
}

int pop()
{
    if(s.empty())
        return -1;
    
    if(s.top() <= minEle)
    {
        int ans=minEle;
        minEle=minEle-s.top();
        s.pop();
        return ans;
    }
    else
    {
        int ans=s.top();
        s.pop();
        return ans;
    }
}

int getMin()
{
    if(s.empty())
        return -1;
    return minEle;
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