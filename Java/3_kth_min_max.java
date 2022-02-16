import java.util.*;
class Main {
    public static void main(String[] args) {
        int n,k;
        Scanner sc = new Scanner(System.in);
        n=sc.nextInt();
        k=sc.nextInt();
        int[] array = new int[n];
        for(int i=0;i<n;i++){
            array[i]=sc.nextInt();
        }
        Arrays.sort(array);
        System.out.println("The kth minimum number is " + array[k-1]);
        System.out.println("The kth maximum number is " + array[n-k]);
    }
}