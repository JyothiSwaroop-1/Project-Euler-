import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        int max;
        for(int a0 = 0; a0 < t; a0++){
            int n = in.nextInt();
            int k = in.nextInt();
            String num = in.next();
            max=0;
            for(int i=0;i<n-k;i++){
            int sum=1;
                for(int j=i;j<k+i;j++){
                    int a=Integer.parseInt(String.valueOf(num.charAt(j)));
                    sum=sum*a;
                }
                if(sum>max){
                    max=sum;
                }
            }
            System.out.println(max);
        }
    }
}

