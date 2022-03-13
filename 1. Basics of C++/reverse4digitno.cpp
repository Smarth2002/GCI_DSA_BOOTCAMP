/*A 4 digit number is entered through keyboard. Write a program to print a new number with digits reversed as of orignal one. E.g.-
INPUT : 1234        OUTPUT : 4321
INPUT : 5982        OUTPUT : 2895
*/

#include<iostream>
using namespace std;

int main()
{
    int no;

    cout<<"enter a 4 digit no only: ";
    cin>>no;

    int digit1=no%10;
    int digit2=(no/10)%10;
    int digit3=(no/100)%10;
    int digit4=(no/1000)%10;

    int reverse_no=(digit1*1000)+(digit2*100)+(digit3*10)+digit4;

    cout<<reverse_no;

    return 0;

}