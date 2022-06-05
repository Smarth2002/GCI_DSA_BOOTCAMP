//7. Write a program to find a substring within a string. If found display its starting position.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str1, str2;

    getline(cin, str1);
    getline(cin, str2);

    int size1, size2;

    for (size1 = 0; str1[size1] != '\0'; size1++);
    for (size2 = 0; str2[size2] != '\0'; size2++);

    int i, counter=0; //counter is for traversing in str2

    for (i = 0; i < size1; i++) //traverse whole string bcz comparison is made through i and counter
    {
        if(counter==size2) //i.e str2 is completely traversed 
            break;

        if(str2[counter] == str1[i]) //move forward in str2
            counter++;       
        else //move back i to same old position by reducing the positions it traveled by comparing with counter and also reset the pointer to again check it from starting
        {
            i-=counter; //eg in pppo we have to find ppo, we start from i=0 after comparing position 2 of pppo we need i back at 1 which is now at 2 so we reduce it by positions str 2 has traveled which make it 0 and on next iteration it becomes 1 (required)
            counter=0;
        }
        
    }
    
    if(counter==size2)
        cout<<"substring found at position "<<i-counter+1;
    

    return 0;
}