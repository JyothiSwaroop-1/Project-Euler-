import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int[][] grid = new int[20][20];
        for(int grid_i=0; grid_i < 20; grid_i++){
            for(int grid_j=0; grid_j < 20; grid_j++){
                grid[grid_i][grid_j] = in.nextInt();
            }
        }
        int max=0,r,i,j,dn,ld,rd;
        for(i=0;i<16;i++){
            for(j=0;j<16;j++){
                r=1;
                dn=1;
                ld=1;
                rd=1;
                for(int k=0;k<4;k++){
                    r=r*grid[j+k][i];
                    dn=dn*grid[j][i+k];
                    rd=rd*grid[j+k][i+k];
                    if(j>3){
                        ld=ld*grid[j-k][i+k];
                    }
                }
                if(max<r){
                    max=r;
                }
                if(max<dn){
                    max=dn;
                }
                if(max<rd){
                    max=rd;
                }
                if(max<ld){
                    max=ld;
                }

            }
        }
        System.out.println(max);
    }
}

