#include<bits/stdc++.h>
using namespace std;

vector<int> cq;
int rear=-1;

void enqueue(int x)
{
    if(5 == cq.size())
    {
        cout<<"queue full"<<endl;
        return;
    }

    cq.push_back(x);
    return;
}

int dequeue()
{
    if(cq.size() == 0)
    {
        cout<<"queue empty"<<endl;
        return -1;
    }

    int tmp=cq[0];
    cq.erase(cq.begin());
    return tmp;
}

void disp()
{
    for (int i = 0; i < cq.size(); i++)
    {
        cout<<cq[i]<<" ";
    }
    
    cout<<endl;
    return;
}

int main()
{
    int size;
    cin>>size;

    int s;

    do
    {
        cin>>s;
        switch (s)
        {
            case 1:
            {
                int x;
                cin>>x;

                enqueue(x);
                break;
            }

            case 2:
            {
                cout<<dequeue()<<endl;
                break;;
            }
            
            case 3:
            {
                disp();
                break;
            }

            default:
                break;
        }
    } while (s == 1 || s == 2 || s== 3);
    
    
    

    return 0;
}