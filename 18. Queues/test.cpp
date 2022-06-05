#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t>0){
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[n];
	    }
	    if(a[0]==1){
	        for(int i=1;i<n;i++){
	            if(a[i]==-1){
	                cout<<"Yes\n";
                   break;
      
	            }
               else
               continue;
	        }
	    }
	    else if(a[0]==-1){
	        for(int j=1;j<n;j++){
	            if(a[j]==1){
	                cout<<"Yes\n";
                   break;
	            }
               else
               continue;
	        }
	    }
	    else
	    cout<<"No\n";
	    t--;
	}
	return 0;
}