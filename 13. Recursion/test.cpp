#include <iostream>

#include <string>

using namespace std;


//1001001001001001001001001001001001001001001001001001001001001001001001001001001001001001001001001001

int G_MOD_RESULT = 10*10*10*10*10*10*10*10*10+7;




 

string gcd_string(int a, int b){

string ret_str = "";

if(a%b==0){

ret_str += "1";

for(int i=0; i<a-1; i++){

ret_str += "0";

}

return ret_str;

}

string seed = gcd_string(b, a % b);

for(int i=0; i<a; i++){

ret_str += seed[i%seed.length()];

}

return ret_str;

}


 

int gcd_string_to_int(string gdc_string_in, int modulo){

int result = 0;

for(int i=0; i<gdc_string_in.length(); i++){

result = (result*2+(gdc_string_in[i]-'0')) % modulo;

}

return result;

}



 

int main()

{

int T;

cin >> T;

for(int test=0; test<T; test++){

int x, y;

cin >> x >> y;

if(x<y){

throw -1;

}

string result = gcd_string(x,y);

int ans = gcd_string_to_int(result, G_MOD_RESULT);

cout << ans << endl;

}

return 0;

}