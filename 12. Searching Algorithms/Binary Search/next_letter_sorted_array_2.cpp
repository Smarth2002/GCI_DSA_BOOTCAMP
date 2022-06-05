/*
Given an array of letters sorted in ascending order, 
find the smallest letter in the the array which is greater than a given key letter.
*/

#include<bits/stdc++.h>
using namespace std;

char nextLetter(char A[], int size, char key)
{
    int start=0, end=size-1;
    int mid;
    char ans='#'; //if no char > key is there in array then ans will be '#'

    while (start <= end)
    {
        mid=start+(end-start)/2;

        if(A[mid] == key)
            start=mid+1; 
        else if(A[mid] < key)
            start=mid+1;
        else
        {
            ans=A[mid];
            end=mid-1;
        }
    }
    
    return ans;
}

int main()
{
    int size;
    cin>>size;

    char A[size];

    for (int i = 0; i < size; i++)
    {
        cin>>A[i];
    }
    
    char key;
    cin>>key;

    cout<<nextLetter(A, size, key);

    return 0;
}