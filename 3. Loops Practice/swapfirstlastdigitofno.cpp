//Write a C program to swap first and last digits of a number.

#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int no,new_no,dig_first,dig_last,digits;
    cin>>no;

    dig_last = no % 10;

    digits = (int) log10(no) + 1;      //formula

    dig_first = no / (int) round ( pow(10,digits-1) ); //breaking a no (digit-1) times

    cout<<"first digit: "<<dig_first<<"\tlast digit: "<<dig_last<<"\tdigits: "<<digits<<endl;

    /*used int before log() because it takes double parameters and also return double value
      used round() also to round the value to nearest integer val but data type remain float/double */

 /*if no is 2748 output is 8742..we have 2,8 and 4.. so we will first make 8000 then 8748 then 8740 then 8742
   we can simply add 2 at last after making 8740*/ 

    new_no = dig_last * (int) round ( pow(10,digits-1) );
    /*to make the base i.e 8000 ...used digit-1 bcz digits=4 but we need 3 0,s*/
    
    
    new_no = new_no + no % (int) round ( pow(10,digits-1) );
    /*no=2748 & new_no=8000 we need 74 in middle so used % for last 3 digits to make 8747*/
    

    new_no = new_no - dig_last;
    /*now that last digit is not required so is subtracted to make 8740*/
    

    new_no = new_no + dig_first;
    /*now simply first digit added to make 8748*/

    cout<<"new no : "<<new_no;

    return 0;

}