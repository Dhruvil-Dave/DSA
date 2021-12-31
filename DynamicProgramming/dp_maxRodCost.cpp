#include <iostream>
#include <vector>

using namespace std;

////////////By Recursion/////////////////
/**
int Revenue(int n, vector<int>& prices){

if(n==0){
    return 0;
}
int max=-1;
for(int i=0;i<n;++i){

    int temp = prices[n-i-1]+Revenue(i, prices);
    if(temp>max){
        max=temp;
    }
}
return max;

}
**/
/////////By DP/////////////////////////

int Revenue(int n, vector<int>& prices){

vector<int> R(n+1);
R[0]=0;
for(int i=1;i<=n;++i){
    int max=-1;
    for(int j=1;j<=i;++j){
        int temp = prices[j-1] + R[i-j];
        if(temp>max){
            max=temp;
        }
    }
    R[i]=max;
}
return R[n];
}

int main() {

int n;
cin>>n;
vector<int> prices;
for(int i=0;i<n;i++){
    int x;
    cin>>x;
    prices.push_back(x);
}
cout<<Revenue(n,prices);
}
