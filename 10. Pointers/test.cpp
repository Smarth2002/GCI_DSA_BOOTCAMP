#include <bits/stdc++.h>
using namespace std;
int main() 
{ 
    char *c[] = {"GeksQuiz", "MCQ", "TEST", "QUIZ"};
    char **cp[] = {c+3, c+2, c+1, c};
    char ***cpp = cp;

    cout<<**++cpp<<endl;
    cout<<*--*++cpp+3<<endl;
    cout<<*cpp[-2]+3<<endl;
    cout<<cpp[-1][-1]+1<<endl;

    cout<<*c<<endl;

    return 0; 
} 