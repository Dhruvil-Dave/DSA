class Solution {
    public int finalValueAfterOperations(String[] operations) {
        int sum = 0;
        int n = operations.length;
        for(int i=0;i<n;i++){
            if(operations[i].charAt(1)=='+'){
                sum = sum + 1;
            }
            else{
                sum = sum - 1;
            }
        }
        return sum;
    }
}