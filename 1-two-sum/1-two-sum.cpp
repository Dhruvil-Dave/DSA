class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> g;
        int n = nums.size();
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(nums[i]+nums[j]==target){
                    g.push_back(i);
                    g.push_back(j);
                }
            }
        }
        return g;
    }
};