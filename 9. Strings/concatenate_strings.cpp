//4. Write a program to concatenate one string contents to another. 

#include<bits/stdc++.h>
using namespace std;

int main()
{
    char str1[50], str2[50];

    cout<<"enter 1st string"<<endl;
    cin.getline(str1, 50);

    cout<<"enter 2nd string"<<endl;
    cin.getline(str2, 50);

    int size1, size2;

    for (size1 = 0; str1[size1] != '\0'; size1++);
    
    str1[size1]=' ';

    int i=0;

    while (str2[i] != '\0')
    {
        str1[size1+1+i]=str2[i];
        
        i++;
    }
    
    for (int index = 0; str1[index] != '\0'; index++) //cout<<str1   giving slightly different output
    {
        cout<<str1[index];
    }
    
    
    return 0;
}