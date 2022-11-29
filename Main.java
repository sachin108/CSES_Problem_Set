import java.util.*;
class Main{
    public static void main(String[] args) {
        Scanner in=new Scanner(System.in);
        long num=in.nextLong();
        long res=0;  
        while(num>0){
            num=num/5;
            res+=num;
        }
        System.out.print(res);
    }
}

// number of zeroes can be determined by counting number of 5