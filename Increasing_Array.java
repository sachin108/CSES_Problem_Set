import java.util.*;
public class Increasing_Array {
    public static void main(String[] args) {
        Scanner in=new Scanner(System.in);
        int n=in.nextInt();
        long[] arr=new long[n];
        for(int i=0;i<n;i++){
            arr[i]=in.nextInt();
        }
        long r=0;
        for(int i=1;i<n;i++){
            if(arr[i-1]>arr[i]){
                r+=(arr[i-1]-arr[i]);
                arr[i]=arr[i-1];
            }
        }
        System.out.print(r);
    }
}
