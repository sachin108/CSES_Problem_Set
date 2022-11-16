import java.util.*;
public class Main {
    public static void main(String[] args) {
        Scanner in=new Scanner(System.in);
        long n=in.nextLong();        
        long[] arr=new long[(int)n-1];
        long sum=0;
        for(int i=0;i<n-1;i++){
            arr[i]=in.nextLong();
            sum+=arr[i];
        }
        System.out.print((n*(n+1))/2-sum);
    }
}
