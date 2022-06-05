//https://www.geeksforgeeks.org/c-program-for-tower-of-hanoi/

#include<bits/stdc++.h>
using namespace std;

void toh(int n, int source, int dest, int help)
{
    if(n == 1) // if only 1 ring left then simply transfer it from source to destination
    {
        cout<<"move disk "<<n<<" from "<<source<<" to "<<dest<<endl;
        return;
    }

    toh(n-1, source, help, dest); //move above (n-1) rings from source to helper

    cout<<"move disk "<<n<<" from "<<source<<" to "<<dest<<endl; //then move nth ring from source to destination

    toh(n-1, help, dest, source); //move back the (n-1) rings from helper to destination

}//in this way n rings are transferred from source to destination

int main()
{
    toh(4, 1, 3, 2);
    return 0;
}