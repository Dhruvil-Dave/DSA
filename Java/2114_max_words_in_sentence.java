class Solution {
    public int mostWordsFound(String[] sentences) {
        int n = sentences.length;
        
        int count = 1;
        int temp = 1;
        for(int i=0;i<n;i++){
            for(int j=0;j<sentences[i].length();j++){
                if(sentences[i].charAt(j) == ' '){
                    temp++;
                }
                
            }
            if(count<temp){
                count = temp;
                temp=1;
            }
            else{
                temp=1;
            }
            
        }
        return count;
    }
}