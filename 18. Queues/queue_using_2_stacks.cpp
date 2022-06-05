//https://practice.geeksforgeeks.org/problems/queue-using-two-stacks/1

#include<bits/stdc++.h>

using namespace std;

class StackQueue{
private:
    stack<int> s1;
    stack<int> s2;
public:
    void push(int B);
    int pop();

};
int main()
{

    int T;
    cin>>T;
    while(T--)
    {
        StackQueue *sq = new StackQueue();

        int Q;
        cin>>Q;
        while(Q--){
        int QueryType=0;
        cin>>QueryType;
        if(QueryType==1)
        {
            int a;
            cin>>a;
            sq->push(a);
        }else if(QueryType==2){
            cout<<sq->pop()<<" ";

        }
        }
        cout<<endl;
    }


}
// } Driver Code Ends


/* The structure of the class is
class StackQueue{
private:   
    // These are STL stacks ( http://goo.gl/LxlRZQ )
    stack<int> s1;
    stack<int> s2;
public:
    void push(int);
    int pop();
}; */

//Function to push an element in queue by using 2 stacks.


//METHOD 1 PUSH-O(1), POP-O(N)

void StackQueue :: push(int x)
{
    // Your Code
    s1.push(x);
}

//Function to pop an element from queue by using 2 stacks.
int StackQueue :: pop()
{
        // Your Code       
        if(s2.empty())
        {
            while(!s1.empty())
            {
                s2.push(s1.top());
                s1.pop();
            }
        }
        
        if(s2.empty())
            return -1;
        
        int temp=s2.top();
        s2.pop();
        return temp;
}


//METHOD 2 PUSH-O(N), POP-O(1)

void StackQueue :: push(int x)
{
    // Your Code
    if(s2.empty())
        s2.push(x);
    else
    {
        while(!s2.empty())
        {
            s1.push(s2.top());
            s2.pop();
        }
        
        s2.push(x);
        
        while(!s1.empty())
        {
            s2.push(s1.top());
            s1.pop();
        }
    }
    
    return;
}

//Function to pop an element from queue by using 2 stacks.
int StackQueue :: pop()
{
        // Your Code       
        if(s2.empty())
            return -1;
        int temp=s2.top();
        s2.pop();
        return temp;
}
