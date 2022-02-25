
import java.util.*;
import java.util.ArrayList;
public class Main
{
	public static void main(String[] args) {
		int n,m;
		Scanner sc = new Scanner(System.in);
		n = sc.nextInt();
		m = sc.nextInt();
		int[] arr = new int[n];
		int[] brr = new int[m];
		
		for(int i=0;i<n;i++){
		    arr[i]=sc.nextInt();
		}
		
		for(int i=0;i<m;i++){
		    brr[i]=sc.nextInt();
		}
		
		///// UNION
		ArrayList<Integer> union = new ArrayList<Integer>();
		
		for(int i=0;i<n;i++){
		    union.add(arr[i]);
		}
		for(int i=0;i<m;i++){
		    if(!union.contains(brr[i])){
		        union.add(brr[i]);
		    }
		}
		
		///// INTERSECTION
        ArrayList<Integer> inter = new ArrayList<Integer>();
        ArrayList<Integer> temp = new ArrayList<Integer>();
        
        for(int i=0;i<n;i++){
            temp.add(arr[i]);
        }
        
        for(int i=0;i<m;i++){
            if(temp.contains(brr[i])){
                inter.add(brr[i]);
            }
        }
		
		//////////// COMMON
		System.out.println("Press 1 for union and 2 for intersection");
		int x = sc.nextInt();
		if(x==1){
    		for (int i = 0; i < union.size(); i++){
                System.out.print(union.get(i) + " ");
    		}
		}
		else if(x==2){
    		for (int i = 0; i < inter.size(); i++){
                System.out.print(inter.get(i) + " ");
    		}
		}
		
	}
}
