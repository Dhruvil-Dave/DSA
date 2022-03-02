class Solution {
    static int setBits(int N) {
        // code here
        ArrayList<Integer> a = new ArrayList<Integer>();
        int rem;
        while(N>0){
            rem=N%2;
            a.add(rem);
            N=N/2;
        }
        int count=0;
        for(int i=0;i<a.size();i++){
            if(a.get(i)==1){
                count++;
            }
        }
        return count;
    }
}