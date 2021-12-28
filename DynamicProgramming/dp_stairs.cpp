#include <iostream>
#include <bits/stdc++.h>
using namespace std;
/**
int stairs(int n){
if(n==1){
    return 1;
}
if(n==2){
    return 2;
}
return stairs(n-1)+stairs(n-2);
}
**/

int stairs(int n) {
int* S = new int[n+1];
S[1]=1;
S[2]=2;
if(n==1){
    return 1;
}
else if(n==2){
    return 2;
}
else{
    for(int i=3;i<=n;++i){
    S[i]=S[i-1]+S[i-2];
}
return S[n];
}

}

int main(){
int n;
cin>>n;
cout<<stairs(n);
}
