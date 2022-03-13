/*Modify the above question to allow student to sit if he/she has medical cause.
 Ask user if he/she has medical cause or not ( 'Y' or 'N' ) and print accordingly.*/

#include<iostream>
using namespace std;

int main()
{
    int attended,held;
    cin>>attended>>held;

    float attendance=float (attended*100)/float (held);

    cout<<attendance<<endl;

    if(attendance>75)
    {
        cout<<"allowed to give exam";
    }
    else
    {
        char med;

        cout<<"medical available or not (y or n): ";
        cin>>med;

        if(med=='y'||med=='Y')
            cout<<"allowed to give exam";
        else if(med=='n'||med=='N')
            cout<<"not allowed to give exam";
        else
            cout<<"enter a valid response";  
    }

    return 0;
    
}