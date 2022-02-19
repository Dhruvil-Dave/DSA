import java.util.*;


public class Main
{
	public static void main(String[] args) {
		int n;
		Scanner sc = new Scanner(System.in);
		n=sc.nextInt();
		int[] arr = new int[n];
		for(int i=0;i<n;i++){
		    arr[i]=sc.nextInt();
		}
		ArrayList<Integer> arrli = new ArrayList<Integer>(n);
		for(int i=0;i<n;i++){
		    if(arr[i]==0){
		        arrli.add(arr[i]);
		    }
		}
		for(int i=0;i<n;i++){
		    if(arr[i]==1){
		        arrli.add(arr[i]);
		    }
		}
		for(int i=0;i<n;i++){
		    if(arr[i]==2){
		        arrli.add(arr[i]);
		    }
		}
		System.out.println(arrli);
	}
}
