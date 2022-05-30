class Solution {
    public int maximumWealth(int[][] accounts) {
        int row = accounts.length;
        int col = accounts[0].length;
        int sum = 0;
        int max = 0;
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                sum = sum + accounts[i][j];
            }
            if(max<sum){
                max=sum;
                sum = 0;
            }else{
                sum = 0;
            }
        }
        return max;
    }
}