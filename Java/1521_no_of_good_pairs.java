class Solution {
    public int numIdenticalPairs(int[] nums) {
        Map<Integer, Integer> hash = new HashMap<Integer, Integer>();
        int n = nums.length;
        for (int i = 0; i < n; i++)
        {
            if (hash.containsKey(nums[i]))
            {
                hash.put(nums[i], hash.get(nums[i]) + 1);
            }
            else
            {
                hash.put(nums[i], 1);
            }
        }
        int sum = 0;
        for (Map.Entry<Integer, Integer> entry : hash.entrySet())
        {
            //System.out.println(entry.getKey() + " " + entry.getValue());
            int x = entry.getValue();
            int y = x * (x-1);
            int z = y/2;
            sum = sum + z;
        }
        return sum;
    }
}