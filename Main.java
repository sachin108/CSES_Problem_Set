import java.util.*;
public class Main {
    public static void main(String[] args) {
        Scanner in=new Scanner(System.in);
        int num=in.nextInt();
        long mod=1000000007; 
        int ans=1;
        for(int i=0;i<num;i++){
            ans = ans*2;
            ans%=mod;
        }
        System.out.print(ans);
    }
}

//A bit string is a sequence consisting of 0's and 1's. If the length of this sequence is N, 
//How many distinct bit strings can we make ? YES buddy, this is a combinatorics problem :)