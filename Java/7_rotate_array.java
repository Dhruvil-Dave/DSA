import java.util.*;

public class Main
{
	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		int n;
		n = sc.nextInt();
		int[] arr = new int[n];
		
		for(int i=0;i<n;i++){
		    arr[i]=sc.nextInt();
		}
		
		System.out.println("Rotate array to left by ");
		int k;
		k = sc.nextInt();
		k = k%n;
		
		for(int i=0;i<n;i++){
		    int t1 = Math.abs((i-k));
		    int t2 = n - t1;
		    arr[i] = arr[t2];
		}
		for(int i=0;i<n;i++){
		    System.out.println(arr[i]);
		}
	}
}