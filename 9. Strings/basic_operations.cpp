#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char s1[10]="hello";
    char s2[10];
    
    for (int i = 0; i < 10; i++) //copying
    {
        s2[i]=s1[i];
    }

    char s3[30];
    int i;

    strcpy(s3, strcat(s1, s2));

    cout<<s3<<endl;

    int array[]={1,2,3};

    cout<<array;
    

    return 0;
    
}