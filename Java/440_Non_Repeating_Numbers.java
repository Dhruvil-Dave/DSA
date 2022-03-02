class Solution
{
    public int[] singleNumber(int[] nums)
    {
        // Code here
        //ArrayList<Integer> ans = new ArrayList<Integer>();
        int n = nums.length;
        int XOR = nums[0];
        for(int i=1;i<n;i++){
            XOR = XOR ^ nums[i];
        }
        int right_set_bit = XOR & ~(XOR-1);
        int x=0,y=0;
        for(int i=0;i<n;i++){
            if((nums[i] & right_set_bit) > 0){
                x = x ^ nums[i];
            }
            else{
                y = y ^ nums[i];
            }
        }
        int ans[] = new int[2];
        ans[0] = Math.min(x,y);
        ans[1] = Math.max(x,y);
        return ans;
    }
}