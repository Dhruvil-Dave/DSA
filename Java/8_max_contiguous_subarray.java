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
		
		int max_till_now = Integer.MIN_VALUE;
		int max_end = 0;
		for(int i=0;i<n;i++){
		    max_end = max_end + arr[i];
		    if(max_till_now <max_end){
		        max_till_now=max_end;
		    }
		    if(max_end<0){
		        max_end = 0;
		    }
		}
		System.out.println(max_till_now);
	}
}
