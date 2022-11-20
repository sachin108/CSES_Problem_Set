import java.util.*;
class Main{
    public static void main(String[] args) {
        Scanner in=new Scanner(System.in);
        long t=in.nextLong();
        long num;
        StringBuilder sb=new StringBuilder();
        while(t-- !=0){
            long r=in.nextLong();
            long c=in.nextLong();
            if(c>r){
                if(c%2==0){
                    num=(c-1)*(c-1);
                    sb.append(num+r);
                    sb.append("\n");
                }
                else{
                    num=c*c;
                    sb.append(num-r+1);
                    sb.append("\n");
                }
            }
            else{
                if(r%2==0){
                    num=r*r;
                    sb.append(num-c+1);
                    sb.append("\n");
                }
                else{
                    num=(r-1)*(r-1);
                    sb.append(num+c);
                    sb.append("\n");
                }
            }
        }
        System.out.print(sb);
        // uff.. Java :)
    }
}