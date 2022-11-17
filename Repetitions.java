import java.util.*;
class Repetitions{
    public static void main(String[] args) {
        Scanner in=new Scanner(System.in);
        String str=in.next();
        char[] arr=str.toCharArray();
        int n=str.length(), c=1, max=1, i=0;
        char ch=arr[i++];
        while(i!=n){
            if(arr[i]==ch){
                ++c;
            }
            else{
                ch=arr[i];
                c=1;
            }
            i++;
            max=Math.max(c, max);
        }
        System.out.print(max);
    }
}