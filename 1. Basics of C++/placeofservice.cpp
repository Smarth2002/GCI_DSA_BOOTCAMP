/*Ask user to enter age, sex ( M or F ), marital status ( Y or N ) and then using following rules print their place of service.
if employee is female, then she will work only in urban areas.

if employee is a male and age is in between 20 to 40 then he may work in anywhere

if employee is male and age is in between 40 t0 60 then he will work in urban areas only.

And any other input of age should print "ERROR".*/

#include<iostream>
using namespace std;

int main()
{
    int age;
    char sex[10],maritial_status[10];

    cout<<"enter age, sex and maritial status"<<endl;
    cin>>age>>sex>>maritial_status;


    if(age>=20 && age<=60)
    {

    if(sex=="female")
        cout<<"can work only in urban areas";
    else if ( age<=40 )
        cout<<"can work anywhere";
    else 
        cout<<"can work only in urban areas";

    }
    else
        cout<<"error";

    return 0;
}