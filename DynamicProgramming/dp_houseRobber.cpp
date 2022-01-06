#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

/**
int Rob(int i,vector<int>&nums){

if(i==0) return nums[0];
int max_val = -1;
max_val = max(max_val, Rob(i-1, nums));
for(int j=i-2;j>=0;--j){
    max_val = max(max_val, Rob(j,nums)+nums[i+1]);
}
return max_val;

}
**/

int Rob(int n, vector<int>& nums){

vector<int> R(n);
R[0]=nums[0];
R[1]=max(nums[0], nums[1]);
for(int i=2;i<n;++i){
    R[i]=R[i-1];
    for(int j=i-2;j>=0;--j){
        R[i]=max(R[i],R[j]+nums[i]);
    }
}
return R[n-1];
}

int main(){

vector<int> nums{1,2,3,4,5};
cout<<Rob(5,nums);

}
