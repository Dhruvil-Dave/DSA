import java.util.*;
public class Main
{
	public static void main(String[] args) {
		int a,b;
		Scanner sc = new Scanner(System.in);
		a = sc.nextInt();
		b = sc.nextInt();
	    ArrayList<Integer> alist = new ArrayList<Integer>();
	    ArrayList<Integer> blist = new ArrayList<Integer>();
	    int rem1,rem2;
	    while(a>0){
	        rem1=a%2;
            alist.add(rem1);
            a=a/2;
	    }
	    while(b>0){
	        rem2=b%2;
            blist.add(rem2);
            b=b/2;
	    }
	    Collections.reverse(alist);
	    Collections.reverse(blist);
	    int diff1,diff2;
	    if(alist.size()>blist.size()){
	        diff1 = alist.size() - blist.size();
	        for(int i=0;i<diff1;i++){
	            blist.add(0,0);
	        }
	    }
	    else{
	        diff2 = blist.size() - alist.size();
	        for(int i=0;i<diff2;i++){
	            alist.add(0,0);
	        }
	    }
	   //System.out.print(alist);
	   //System.out.print(blist);
	   int counter = 0;
	   for(int i=0;i<alist.size();i++){
	       if(alist.get(i)!=blist.get(i)){
	           counter++;
	       }
	   }
	   System.out.println(counter);
	}
}
