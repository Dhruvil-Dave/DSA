class Solution{
    
    // arr: input array
    // n: size of array
    // Function to find the trapped water between the blocks.
    static long trappingWater(int arr[], int n) { 
        // Your code here
        int[] left = new int[n];
        int[] right = new int[n];
        left[0] = arr[0];
        right[n-1] = arr[n-1];
        int current_left_max = left[0];
        int current_right_max = right[n-1];
        for(int i=1;i<n;i++){
            current_left_max = Math.max(current_left_max,arr[i]);
            left[i] = current_left_max;
        }
        for(int i=n-2;i>=0;i--){
            current_right_max = Math.max(current_right_max,arr[i]);
            right[i] = current_right_max;
        }
        long sum = 0;
        for(int i=0;i<n;i++){
            sum += Math.min(left[i],right[i]) - arr[i]; 
        }
        return sum;
    } 
}