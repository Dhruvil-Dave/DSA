import java.util.*;

public class Main
{
	public static void main(String[] args) {
		int n,k;
		Scanner sc = new Scanner(System.in);
		n = sc.nextInt();
		k = sc.nextInt();
		int[] arr = new int[n];
		for(int i=0;i<n;i++){
		    arr[i] = sc.nextInt();
		}
		
		HashMap<Integer,Integer> hmap = new HashMap<Integer,Integer>();
		
		for(int i=0;i<n;i++){
		    if(!hmap.containsKey(arr[i])){
		        hmap.put(arr[i],1);
		    }
		    else{
		        int count = hmap.get(arr[i]);
		        hmap.put(arr[i],count+1);
		    }
		}
		int x = n/k;
		for (Map.Entry m : hmap.entrySet())
        {
            Integer temp = (Integer)m.getValue();
            if (temp > x)
                System.out.print(m.getKey() + " ");
        }
	}
}
