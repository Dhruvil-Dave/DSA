#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	
	// your code goes here
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
    	int n;
    	cin>>n;
    	int count=0;
    	if(n%4==2 || n%4==3){
    	    count++;
    	}
    	if(count>0){
    	    cout<<"YES"<<endl;
    	}
    	else{
    	    cout<<"NO"<<endl;
    	}
	}
	return 0;
}
