import java.util.*;
class Main {
    public static void main(String[] args) {
        int n;
        Scanner sc = new Scanner(System.in);
        n=sc.nextInt();
        int[] array = new int[n];
        for(int i=0;i<n;i++){
            array[i]=sc.nextInt();
        }
        int[] brr = new int[n];
        for(int i=0;i<n;i++){
            brr[i] = array[n-i-1];
        }
        for (int i=0; i<n; i++)   
        {  
            System.out.print(brr[i] + " ");
            //System.out.print(" ");
        }
        
    }
}