#include<iostream>
#include<bits/stdc++.h>

using namespace std;

vector<int> removeDuplicates(int *a,int n){

    vector<int> output;
    unordered_map<int, bool> mymap;

    for(int i=0;i<n;i++){
        if(mymap.count(a[i])==0){
            output.push_back(a[i]);
            mymap[a[i]] = true;
        }
    }

    return output;
}




int main(){

    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<int> output = removeDuplicates(a,n);

    for(int i=0;i<output.size();i++){
        cout<<output[i]<<" ";
    }
    return 0;
}
