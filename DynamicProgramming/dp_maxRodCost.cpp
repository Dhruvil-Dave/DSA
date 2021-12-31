#include <iostream>
#include <vector>

using namespace std;

////////////By Recursion/////////////////
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

/////////By DP/////////////////////////


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
