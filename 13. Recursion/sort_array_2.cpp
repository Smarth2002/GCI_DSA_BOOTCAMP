//https://www.geeksforgeeks.org/recursive-insertion-sort/

#include<bits/stdc++.h>
using namespace std;

void sort1(int A[], int size)
{
    if(size == 1)
        return;

    sort1(A, size-1);

    int ele=A[size-1];

    int i;
    for ( i = size-2; i >= 0; i--)
    {
        if(A[i] > ele)       
            A[i+1]=A[i];       
        else
            break;
    }
    
    A[i+1]=ele;
}

void insert_sort2(vector<int>& A, int ele)
{
    if(A.size() == 0 || A[A.size()-1] < ele)
    {
        A.push_back(ele);
        return;
    }

    int temp=A[A.size()-1];
    A.pop_back();

    insert_sort2(A, ele);

    A.push_back(temp);

    return;
}

void sort2(vector<int>& a)
{
    if(a.size() == 1)
        return;
    
    int ele=a[a.size()-1];
    a.pop_back();

    sort2(a);

    return insert_sort2(a, ele);
}

int main()
{
    int A[]={1,5,0,2};

    sort1(A, 4);

    for (int i = 0; i < 4; i++)
    {
        cout<<A[i]<<" ";
    }
    
    cout<<endl;
    
    vector<int> a{1,5,0,2};
    sort2(a);

    for (int i = 0; i < 4; i++)
    {
        cout<<a[i]<<" ";
    }
    
    return 0;
}