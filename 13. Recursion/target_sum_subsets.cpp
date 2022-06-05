//https://www.geeksforgeeks.org/subset-sum-problem-dp-25/
//https://www.pepcoding.com/resources/online-java-foundation/recursion-backtracking/target-sum-subsets-official/ojquestion

#include<bits/stdc++.h>
using namespace std;

void solve(int a[], int size, int index, int target, vector<int> op)
{
    if(index == size)
    {
        int sum=0;

        for(int i=0; i<op.size(); i++)
        {
            sum+=op[i];
        }

        if(sum == target)
        {
            for(int i=0; i<op.size(); i++)
                cout<<op[i]<<" ";
            
            cout<<endl;
        }

        return;
    }

    vector<int> op1=op;
    op1.push_back(a[index]);

    solve(a, size, index+1, target, op1);

    vector<int> op2=op;

    solve(a, size, index+1, target, op2);

    return;
}

int main()
{
    vector<int> op;
    int a[5]={10, 20, 30, 40, 50};
    int index=0;
    int sum=70;

    solve(a, 5, index, sum, op);

    return 0;
}