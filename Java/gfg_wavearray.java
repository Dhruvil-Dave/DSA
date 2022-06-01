class Solution {
    public static void convertToWave(int n, int[] a) {
        // code here
        for(int i=0;i<n-1;i++){
            if(i%2==0){
                int temp;
                temp = a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
            
        }
    }
}