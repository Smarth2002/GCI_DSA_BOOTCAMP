/*8.
Write a program to check if elements of an array are same or not it read from front or back. E.g.-
2	3	15	15	3	2*/

#include<iostream>
using namespace std;

int isPalindromic_array( int array[], int size )
{
    for (int i = 0; i < (size-1)/2; i++)
    {
        if( array[i] != array[size-1-i] )
            return 0;                       //if not match then no need to check further bcz not a palindrome
    }

    return 1;
}

int main()
{
    int size;
    cout<<"enter size of array: ";
    cin>>size;

    int array[size];

    for (int i = 0; i < size; i++)
    {
        cin>>array[i];
    }
    
    if( isPalindromic_array( array, size ) )
        cout<<"palindromic";
    else
        cout<<"not palindromic";

    return 0;
}
