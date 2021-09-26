#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int n,m,x;
	    cin>>n>>m;
	    vector<int> v;
	    vector<int> v1;
	    vector<int>::iterator new_end;
	    for(int j=1;j<=n;j++){
	        v.push_back(j);
	    }
	    for(int j=0;j<m;j++){
	        cin>>x;
	        v1.push_back(x);
	    }
	    sort(v.begin(),v.end());
	    sort(v1.begin(),v1.end());
	    for(int j=0;j<v1.size();j++){
	        for(int k=0;k<v.size();k++){
	            if(v1[j]==v[k]){
	               new_end = remove(v.begin(), v.end(), v1[j]);
	            }
	        }
	    }
	   int diff=n-m;
	   // for(int j=0;j<diff;j++){
	   //     cout<<v[j];
	   // }
	   vector<int> v2;
	   vector<int> v3;
	   for(int j=0;j<diff;j++){
	       if(j%2==1){
	           v3.push_back(v[j]);
	       }
	       else{
	           v2.push_back(v[j]);
	       }
	   }
	   for(int j=0;j<v2.size();j++){
	       cout<<v2[j]<<" ";
	   }
	   cout<<endl;
	   for(int j=0;j<v3.size();j++){
	       cout<<v3[j]<<" ";
	   }
	   cout<<endl;

	}
	return 0;
}
