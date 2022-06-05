/*COUNT NUMBER OF OCURRENCES(or frequency) IN A SORTED ARRAY:

Given a sorted array arr[] and a number x, write a function that counts the occurrences of x in arr[].
 Expected time complexity is O(Logn)
Examples:

  Input: arr[] = {1, 1, 2, 2, 2, 2, 3,},   x = 2
  Output: 4 // x (or 2) occurs 4 times in arr[]

  Input: arr[] = {1, 1, 2, 2, 2, 2, 3,},   x = 3
  Output: 1 
*/

#include<bits/stdc++.h>
using namespace std;

int count(int A[], int size, int no)
{
    int start=0, end=size-1;
    int mid, occur1=-1, occur2=-1; //occur1=1st occurence, occur2=last occurence

    while(start <= end)
    {
        mid=start+(end-start)/2;

        if(no == A[mid])
        {
            occur1=mid;
            end=mid-1;
        }
        else if(no > A[mid])
            start=mid+1;
        else
            end=mid-1;
    }

    start=0, end=size-1;

    while (start <= end)
    {
        mid=start+(end-start)/2;

        if(no == A[mid])
        {
            occur2=mid;
            start=mid+1;
        }
        else if(no > A[mid])
            start=mid+1;
        else
            end=mid-1;
    }
    if(occur1 == -1)
        return 0;
    else
        return occur2-occur1+1;
}


int main()
{
    int size;
    cin>>size;

    int A[size];

    for (int i = 0; i < size; i++)
    {
        cin>>A[i];
    }
    
    int no;
    cin>>no;

    cout<<count(A, size, no);

    return 0;
}