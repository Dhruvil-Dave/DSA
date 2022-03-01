import java.util.*;

public class Main
{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n,m;
		n = sc.nextInt();
		m = sc.nextInt();
		int[] a = new int[n];
		for(int i=0;i<n;i++){
		    a[i]=sc.nextInt();
		}
		Arrays.sort(a);
	    int diff=Integer.MAX_VALUE;
        int start = 0;
        int end = m-1;
        while(end<=n){
            int temp = a[end] - a[start];
            if(temp<diff){
                diff=temp;
            }
        }
        System.out.println(diff);
		
	}
}
