#include <iostream>
using namespace std;


int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int n;
	    cin>>n;
	    int sum=0,r;
	    while(n>0){
	        r=n%10;
	        sum=sum+r;
	        n=n/10;
	    }
	    cout<<sum<<endl;
	}
	return 0;
}

