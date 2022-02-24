import java.util.*;
public class Main
{
	public static void main(String[] args) {
		int n;
		Scanner sc = new Scanner(System.in);
		n = sc.nextInt();
		int[] arr = new int[n];
		for(int i=0;i<n;i++){
		    arr[i]=sc.nextInt();
		}
		int i = -1,temp;
		for(int j=0;j<n;j++){
		    if(arr[j]<=i){
		        i++;
		        temp=arr[i];
		        arr[i]=arr[j];
		        arr[j]=temp;
		    }
		}
		for(int j=0;j<n;j++){
		    System.out.print(arr[j] + " ");
		}
		
	}
}
