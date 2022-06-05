//Write a C program to enter a number and print it in words.

#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int no,digit,rev_no=0;
    cin>>no;

    int digits=log10(no)+1;

    /*we can print digits from end so we reverse a no to print digits starting  end 
      to nullify the effect*/

    while (no!=0)          
    {
        digit=no%10;
        rev_no=rev_no*10+digit;
        no/=10;
    }

    /*code fail for no's like 10,100 bcz rev no=1 so we find no of zeroes by subtracting no of digits in 
      no entered and reverse no*/

    digits = digits -( log10(rev_no)+1);

    cout<<rev_no<<endl;

    while(rev_no!=0)     //after getting the last digit comparing to print desired word
    {
        switch (rev_no%10)
        {
        case 0:
            cout<<"zero ";
            break;

        case 1:
            cout<<"one ";
            break;

        case 2:
            cout<<"two ";
            break;

        case 3:
            cout<<"three ";
            break;

        case 4:
            cout<<"four ";
            break;

        case 5:
            cout<<"five ";
            break;

        case 6:
            cout<<"six ";
            break;

        case 7:
            cout<<"seven ";
            break;

        case 8:
            cout<<"eight ";
            break;

        case 9:
            cout<<"nine ";
            break;

        default:
            break;
        }

        rev_no/=10;
    }

    while (digits)       //we have found no of zeroes and so print them at the end
    {
        cout<<"zero ";
        digits--;
    }

    return 0;
 
}