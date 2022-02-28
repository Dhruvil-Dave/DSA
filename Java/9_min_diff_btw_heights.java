import java.util.*;

public class Main
{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n,k;
		n = sc.nextInt();
		k = sc.nextInt();
		int[] arr = new int[n];
		
		for(int i=0;i<n;i++){
		    arr[i]=sc.nextInt();
		}
		
		if(n==1)
       {
           System.out.println("0");
       }
       
       Arrays.sort(arr);
       
       int diff = arr[n-1] - arr[0];
       
       int max,min;
       
       for(int i = 1;i<n;i++)
       {
           if(arr[i]-k < 0)
           {
               
               continue;
           }
           
           max = Math.max(arr[i-1]+k,arr[n-1]-k);
           min = Math.min(arr[0]+k,arr[i]-k);
           
           diff = Math.min(diff,max-min);
       }
       System.out.println(diff);
	}
}