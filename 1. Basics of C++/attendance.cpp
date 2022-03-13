/*A student will not be allowed to sit in exam if his/her attendence is less than 75%.
Take following input from user
Number of classes held
Number of classes attended.
And print
percentage of class attended
Is student is allowed to sit in exam or not.*/

#include<iostream>
using namespace std;

int main()
{
    int attended,held;
    cin>>attended>>held;

    float attendance= float (attended*100)/ float (held);

    if(attendance<75)
        cout<<"attendance is: "<<attendance<<"%"<<endl<<"not allowed to sit in exam";
    else
        cout<<"attendance is: "<<attendance<<"%"<<endl<<"allowed to sit in exam";

    return 0;


}