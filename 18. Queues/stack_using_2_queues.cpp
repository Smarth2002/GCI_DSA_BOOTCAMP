//https://practice.geeksforgeeks.org/problems/stack-using-two-queues/1#

#include<bits/stdc++.h>
using namespace std;

class QueueStack{
private:
    queue<int> q1;
    queue<int> q2;
public:
    void push(int);
    int pop();
};


int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        QueueStack *qs = new QueueStack();

        int Q;
        cin>>Q;
        while(Q--){
        int QueryType=0;
        cin>>QueryType;
        if(QueryType==1)
        {
            int a;
            cin>>a;
            qs->push(a);
        }else if(QueryType==2){
            cout<<qs->pop()<<" ";

        }
        }
        cout<<endl;
    }
}
// } Driver Code Ends


/* The structure of the class is
class QueueStack{
private:
    queue<int> q1;
    queue<int> q2;
public:
    void push(int);
    int pop();
};
 */

//METHOD 1 PUSH-O(N), POP-O(1)

void QueueStack :: push(int x)
{
        // Your Code
        if(q1.empty())
            q1.push(x);
        else
        {
            while(!q1.empty())
            {
                q2.push(q1.front());
                q1.pop();
            }
            
            q1.push(x);
            
            while(!q2.empty())
            {
                q1.push(q2.front());
                q2.pop();
            }
        }
          
        return;
}

//Function to pop an element from stack using two queues. 
int QueueStack :: pop()
{
        // Your Code        
        if(q1.empty())
            return -1;
        int temp=q1.front();
        q1.pop();
        return temp;
}

//METHOD 2 PUSH-O(1), POP-O(N)

void QueueStack :: push(int x)
{
        // Your Code
        if(q1.empty() && q2.empty())
            q1.push(x);
        else if(q1.empty())
            q2.push(x);
        else
            q1.push(x);
        
        return;
}

//Function to pop an element from stack using two queues. 
int QueueStack :: pop()
{
        // Your Code        
        if(q1.empty() && q2.empty())
            return -1;
            
        int temp;
        
        if(q2.empty())
        {
            while(q1.size() > 1)
            {
                q2.push(q1.front());
                q1.pop();
            }
            temp=q1.front();
            q1.pop();
        }
        else
        {
            while(q2.size() > 1)
            {
                q1.push(q2.front());
                q2.pop();
            }
            temp=q2.front();
            q2.pop();
        }
        
        return temp;
}


//METHOD 3 PUSH-O(N), POP-O(1) USING ONLY 1 QUEUE

void QueueStack ::push(int x) {
    
    q1.push(x);
    
    while(q1.front() != x)
    {
        q1.push(q1.front());
        q1.pop();
    }
    
    return;
}

int QueueStack :: pop() {
        
        int tmp=q1.front();
        q1.pop();
        
        return tmp;
    }